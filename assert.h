//
// Created by SirMathhman on 7/2/2020.
//

#ifndef MAGMA_ASSERT_H
#define MAGMA_ASSERT_H

#include "system.h"

Void test(char *name, Void (*action)());

Void assertTrue(Bool value);

Void assertFalse(Bool value);

Void assertCharEquals(Char value0, Char value1);

Void assertIntEquals(Int value0, Int value1);

Void assertFloatEquals(Float value0, Float value1);

Void assertDoubleEquals(Double value0, Double value1);

Void assertSame(Any *value0, Any *value1);

Void assertDifferent(Any *value0, Any *value1);

Void assertNull(Any *value);

Void assertNotNull(Any *value);

Void assertThrows(Any *value, Any *ref, Void (*action)(Any *));

Void assertDoesNotThrow(Any *ref, Void (*action)(Any *));

#endif //MAGMA_ASSERT_H
