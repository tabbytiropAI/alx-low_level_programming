#include "main.h"

unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;
    int i;

    if (b == NULL)
        return 0;

    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] < '0' || b[i] > '1') // check if a non-binary character exists
            return 0;
        result = result << 1; // shift left by 1 bit
        if (b[i] == '1') // add 1 if the current bit is 1
            result += 1;
    }

    return result;
}

