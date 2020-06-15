//
// Created by SirMathhman on 6/14/2020.
//

#ifndef MAGMA_1_ASSERT_H
#define MAGMA_1_ASSERT_H

#include "lang.h"

typedef struct Test {
    string name;

    void (*run)();
} Test;

Test Test_(string name, void(*run)());

#endif //MAGMA_1_ASSERT_H
