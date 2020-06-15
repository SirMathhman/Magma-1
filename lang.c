//
// Created by SirMathhman on 6/15/2020.
//

#include "lang.h"

any *result;

void throw(any *value) {
    result = value;
}

void catch(any *ref, void (*action)(any *, any *)) {
    action(ref, result);
}
