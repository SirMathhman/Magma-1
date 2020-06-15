//
// Created by SirMathhman on 6/15/2020.
//

#ifndef MAGMA_1_LANG_H
#define MAGMA_1_LANG_H

#include "stddef.h"

typedef char *string;
typedef int bool;
typedef void any;

#define false 0
#define true 1
#define null NULL

void throw(any *value);

void catch(any *ref, void (*action)(any *ref, any* value));

#endif //MAGMA_1_LANG_H
