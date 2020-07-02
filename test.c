//
// Created by SirMathhman on 7/2/2020.
//

#include "assert.h"

void testAssertTrue() {
    assertTrue(true);
}

void testAssertFalse() {
    assertFalse(false);
}

void testCharEquals() {
    assertCharEquals('x', 'x');
}

void testIntEquals() {
    assertIntEquals(10, 10);
}

void testFloatEquals() {
    assertFloatEquals(10.0f, 10.0f);
}

void testDoubleEquals() {
    assertDoubleEquals(10.0, 10.0);
}

void testAssertSame() {
    int x = 10;
    assertSame(&x, &x);
}

void testAssertDifferent() {
    int x = 10;
    int y = 20;
    assertDifferent(&x, &y);
}

void testAssertNull() {
    assertNull(null);
}

void testAssertNotNull() {
    int x = 10;
    assertNotNull(&x);
}

void __testAssertThrows__0(void *ref) {
    throw(ref);
}

void testAssertThrows() {
    int x = 10;
    assertThrows(&x, &x, __testAssertThrows__0);
}

void __testAssertDoesNotThrow__0(void *ref) {
}

void testAssertDoesNotThrow() {
    assertDoesNotThrow(null, __testAssertDoesNotThrow__0);
}

int main() {
    test("Assert True", testAssertTrue);
    test("Assert False", testAssertFalse);

    test("Assert Char Equals", testCharEquals);
    test("Assert Int Equals", testIntEquals);
    test("Assert Float Equals", testFloatEquals);
    test("Assert Double Equals", testDoubleEquals);

    test("Assert Same", testAssertSame);
    test("Assert Different", testAssertDifferent);

    test("Assert Null", testAssertNull);
    test("Assert Not Null", testAssertNotNull);
    test("Assert Throws", testAssertThrows);
    test("Assert Does Not Throw", testAssertDoesNotThrow);
}