//
// Created by SirMathhman on 7/2/2020.
//

#include "assert.h"
#include "stdio.h"

String *__testName__;

Void test(char *name, Void (*action)()) {
    __testName__ = String_(name);
    action();
    Exception *e = catch();
    if (e != null) {
        if (__testName__ != null) {
            fprintf(stderr, "An exception in test %s was thrown.\n\t", __testName__->value);
        } else {
            fprintf(stderr, "An exception in testing occurred.\n\t");
        }
        fprintf(stderr, "%s\n", e->message->value);
    }
}

Bool hasValidTestName() {
    if (__testName__ == NULL) {
        fprintf(stderr, "No test name was set.\n");
        return false;
    } else {
        return true;
    }
}

Void fail(char *message) {
    if (hasValidTestName()) {
        fprintf(stderr, "FAIL: %s\n", __testName__->value);
        fprintf(stderr, "\t%s\n", message);
    }
}

Void pass() {
    if (hasValidTestName()) {
        fprintf(stdout, "PASS: %s\n", __testName__->value);
    }
}

Void assertTrue(Bool value) {
    if (value) {
        pass();
    } else {
        fail("Value was not true.");
    }
}

Void assertFalse(Bool value) {
    if (!value) {
        pass();
    } else {
        fail("Value was not false.");
    }
}

Void assertCharEquals(Char value0, Char value1) {
    if (value0 == value1) {
        pass();
    } else {
        fail("Characters were not equal.");
    }
}

Void assertIntEquals(Int value0, Int value1) {
    if (value0 == value1) {
        pass();
    } else {
        fail("Integers were not equal.");
    }
}

Void assertFloatEquals(Float value0, Float value1) {
    if (value0 == value1) {
        pass();
    } else {
        fail("Floats were not equal.");
    }
}

Void assertDoubleEquals(Double value0, Double value1) {
    if (value0 == value1) {
        pass();
    } else {
        fail("Doubles were not equal.");
    }
}

Void assertSame(Any *value0, Any *value1) {
    if (value0 == value1) {
        pass();
    } else {
        fail("Pointers aren't the same.");
    }
}

Void assertDifferent(Any *value0, Any *value1) {
    if (value0 != value1) {
        pass();
    } else {
        fail("Pointers are the same.");
    }
}

Void assertNull(Any *value) {
    if (value == null) {
        pass();
    } else {
        fail("Value was not null.");
    }
}

Void assertNotNull(Any *value) {
    if (value != null) {
        pass();
    } else {
        fail("Value was null.");
    }
}

Void assertThrows(Any *value, Any *ref, Void (*action)(Any *)) {
    action(ref);
    if (thrown()) {
        Any *thrown = catch();
        if (thrown == value) {
            pass();
        } else {
            fail("Value thrown was not the expected one.");
        }
    } else {
        fail("Nothing was thrown.");
    }
}

Void assertDoesNotThrow(Any *ref, Void (*action)(Any *)) {
    action(ref);

    if (thrown()) {
        fail("Something was thrown.");
    } else {
        pass();
    }
}







