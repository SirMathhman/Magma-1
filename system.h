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
typedef int Bool;

typedef void Void;
typedef char Char;
typedef int Int;
typedef float Float;
typedef double Double;

typedef struct String {
    Int length;
    Char *value;

    Bool (*set)(Any *ref, Int index, Char value);

    Char (*get)(Any *ref, Int index);

    Void (*delete)(Any *ref);
} String;

String *String_(Char *value);

typedef struct Exception {
    String *message;

    Void (*delete)(Any *);
} Exception;

Exception *Exception_(String *message);

Void throw(Exception *value);

Bool thrown();

Exception *catch();

#endif //MAGMA_SYSTEM_H
