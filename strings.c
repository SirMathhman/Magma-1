//
// Created by SirMathhman on 6/14/2020.
//

#include "strings.h"
#include "string.h"
#include "stdlib.h"

StringBuffer *appendString(any *ref, string value) {
    StringBuffer *this = (StringBuffer *) ref;
    size_t previousSize = strlen(this->value);
    size_t valueSize = strlen(value);
    size_t newSize = previousSize + valueSize;
    realloc(this->value, newSize + 1);
    strcat(this->value, value);
    return this;
}

StringBuffer *appendCharacter(any *ref, char c) {
    return appendString(ref, ToStringChar(c));
}

void delete(any *ref) {
    StringBuffer *this = (StringBuffer *) ref;
    free(this->value);
}

string toString(any *ref) {
    StringBuffer *this = (StringBuffer *) ref;
    string value = this->value;
    size_t length = strlen(value);
    string copy = malloc(length + 1);
    strcpy(copy, value);
    this->delete(this);
    return copy;
}

StringBuffer StringBuffer_() {
    StringBuffer result = {empty(), appendCharacter, appendString, toString, delete};
    return result;
}

string ToStringChar(char c) {
    string value = malloc(sizeof(char) * 2);
    if (value != 0) {
        value[0] = c;
        value[1] = '\0';
    }
    return value;
}

string empty() {
    string result = malloc(sizeof(char));
    if (result != 0) {
        result[0] = '\0';
    }
    return result;
}
