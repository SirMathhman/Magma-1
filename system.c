//
// Created by SirMathhman on 7/2/2020.
//

#include "system.h"
#include "stdlib.h"
#include "string.h"

Exception *__thrown__ = null;

Void throw(Exception *value) {
    __thrown__ = value;
}

Bool thrown() {
    return __thrown__ != null;
}

Exception *catch() {
    Any *copy = __thrown__;
    __thrown__ = null;
    return copy;
}

Bool hasValidIndex(Int index, Int length) {
    if (index < 0) {
        throw(Exception_(String_("Index was less than 0.")));
        return false;
    }
    if (index >= length) {
        throw(Exception_(String_("Index exceeded valid length.")));
        return false;
    }
    return true;
}

Bool set_String(Any *ref, Int index, Char value) {
    String *this = ref;
    if (hasValidIndex(index, this->length)) {
        this->value[index] = value;
        return true;
    } else {
        return false;
    }
}

Char get_String(Any *ref, Int index) {
    String *this = ref;
    if (hasValidIndex(index, this->length)) {
        return this->value[index];
    } else {
        return 0;
    }
}

Void delete_String(Any *ref) {
    String *this = ref;
    if (this != null) {
        free(this->value);
        free(this);
    }
}

String *String_(Char *value) {
    Char *copy = malloc(sizeof(char) * (strlen(value) + 1));
    strcpy(copy, value);

    String *this = malloc(sizeof(String));
    this->length = strlen(value);
    this->value = copy;

    this->set = set_String;
    this->get = get_String;
    this->delete = delete_String;
    return this;
}

Void delete_Exception(Any *ref) {
    if (ref != null) {
        Exception *this = ref;
        free(this->message);
        free(this);
    }
}

Exception *Exception_(String *message) {
    Exception *this = malloc(sizeof(Exception));
    this->message = message;
    this->delete = delete_Exception;
    return this;
}


