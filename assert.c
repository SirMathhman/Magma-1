//
// Created by SirMathhman on 6/14/2020.
//

#include "assert.h"
#include "stdio.h"

string test_current = "";

void pass(string name) {
    printf("%s", "PASS: ");
    printf("%s", name);
}

void fail(string name, string message) {
    printf("%s", "FAIL: ");
    printf("%s", name);
    printf("%s", " -> ");
    printf("%s", message);
}

void execute(any *ref) {
    Test *this = (Test *) ref;
    test_current = this->name;
    this->run();
}

Test Test_(string name, void (*run)()) {
    Test result = {name, run, execute};
    return result;
}
