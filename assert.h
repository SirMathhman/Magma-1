//
// Created by SirMathhman on 6/14/2020.
//

#ifndef MAGMA_1_ASSERT_H
#define MAGMA_1_ASSERT_H

#include "lang.h"

void assertTrue(bool value);

void assertFalse(bool value);

void assertString(string expected, string actual);

void assertNotSame(any* expected, any* actual);

void execute(string name, void (*action)());

#endif //MAGMA_1_ASSERT_H
