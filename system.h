//
// Created by SirMathhman on 7/2/2020.
//

#ifndef MAGMA_SYSTEM_H
#define MAGMA_SYSTEM_H

#include "stddef.h"

#define null NULL
#define false 0
#define true 1

typedef void Any;
typedef char *String;
typedef int Bool;

typedef void Void;
typedef char Char;
typedef int Int;
typedef float Float;
typedef double Double;

Void throw(Any *value);

Bool thrown();

Any *catch();

#endif //MAGMA_SYSTEM_H
