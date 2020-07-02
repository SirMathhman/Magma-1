//
// Created by SirMathhman on 7/2/2020.
//

#include "system.h"

Any *__thrown__ = null;

Void throw(Any *value) {
    __thrown__ = value;
}

Bool thrown() {
    return __thrown__ != null;
}

Any *catch() {
    Any *copy = __thrown__;
    __thrown__ = null;
    return copy;
}


