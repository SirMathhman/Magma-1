//
// Created by SirMathhman on 6/14/2020.
//

#include "assert.h"
#include "stdio.h"

string test_current = "";

void pass() {
    printf("%s", "PASS: ");
    printf("%s", test_current);
}

void fail(string message) {
    printf("%s", "FAIL: ");
    printf("%s", test_current);
    printf("%s", " -> ");
    printf("%s", message);
}

void assertTrue(bool value) {
    if (value) {
        pass();
    } else {
        fail("Value was false.");
    }
}

void execute(string name, void (*action)()) {
    test_current = name;
    action();
}

