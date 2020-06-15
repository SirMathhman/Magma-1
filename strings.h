//
// Created by SirMathhman on 6/14/2020.
//

#ifndef MAGMA_1_STRINGS_H
#define MAGMA_1_STRINGS_H

#include "lang.h"

string ToStringChar(char c);

typedef struct StringBuffer {
    string value;

    struct StringBuffer *(*appendCharacter)(any *ref, char c);

    struct StringBuffer *(*appendString)(any *ref, string value);

    string (*toString)(any *ref);

    void (*delete)(any *ref);
} StringBuffer;

StringBuffer StringBuffer_();

string empty();

#endif //MAGMA_1_STRINGS_H
