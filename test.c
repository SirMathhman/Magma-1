//
// Created by SirMathhman on 6/14/2020.
//

#include "assert.h"
#include "strings.h"

void testAssertTrue() {
    assertTrue(true);
}

void testAssertFalse() {
    assertFalse(false);
}

void testStringBuffer() {
    StringBuffer buffer = StringBuffer_();
    assertString(buffer.value, "");
    buffer.delete(&buffer);
}

void testStringBufferToString() {
    StringBuffer buffer = StringBuffer_();
    string result = buffer.toString(&buffer);
    assertString(result, "");
    assertNotSame(result, buffer.value);
}

void testStringBufferAppendString() {
    StringBuffer buffer = StringBuffer_();
    string result = buffer.appendString(&buffer, "test")
            ->toString(&buffer);
    assertString("test", result);
}

void testStringBufferAppendCharacter() {
    StringBuffer buffer = StringBuffer_();
    string result = buffer.appendCharacter(&buffer, 'x')
            ->toString(&buffer);
    assertString("x", result);
}


int main() {
    execute("Assert True", testAssertTrue);
    execute("Assert False", testAssertFalse);
    execute("String Buffer", testStringBuffer);
    execute("String Buffer ToString", testStringBufferToString);
    execute("String Buffer Append String", testStringBufferAppendString);
    execute("String Buffer Append Character", testStringBufferAppendCharacter);
    return 0;
}