//
// Created by SirMathhman on 6/14/2020.
//

#include "assert.h"
#include "stdio.h"
#include "string.h"

string test_current = "";

void pass() {
    printf("%s", "PASS: ");
    printf("%s", test_current);
    printf("%s", "\n");
}

void fail(string message) {
    printf("%s", "FAIL: ");
    printf("%s", test_current);
    printf("%s", " -> ");
    printf("%s", message);
    printf("%s", "\n");
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

void assertFalse(bool value) {
    if (!value) {
        pass();
    } else {
        fail("Value was true.");
    }
}

void assertString(string expected, string actual) {
    size_t expectedLength = strlen(expected);
    size_t actualLength = strlen(actual);
    if (expectedLength == actualLength) {
        bool shouldPass = true;
        for (int i = 0; i < expectedLength; ++i) {
            char expectedChar = expected[i];
            char actualChar = actual[i];
            if (expectedChar != actualChar) {
                shouldPass = false;
                break;
            }
        }
        if (shouldPass) {
            pass();
        } else {
            fail("Characters differ.");
        }
    } else {
        fail("Lengths differ.");
    }
}

void assertNotSame(any *expected, any *actual) {
    if (expected != actual) {
        pass();
    } else {
        fail("Locations are the same.");
    }
}

