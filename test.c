//
// Created by SirMathhman on 6/14/2020.
//

#include "assert.h"

void testAssertTrue() {
    assertTrue(true);
}

void testAssertFalse() {
    assertFalse(false);
}

int main() {
    execute("Assert True", testAssertTrue);
    execute("Assert False", testAssertFalse);
    return 0;
}