//
// Created by SirMathhman on 6/14/2020.
//

#include "assert.h"

Test Test_(string name, void (*run)()) {
    Test result = {name, run};
    return result;
}
