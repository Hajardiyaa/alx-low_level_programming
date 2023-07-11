#include "main.h"

unsigned int binary_to_uint(const char *b) {
    if (b == NULL)
        return 0;

    unsigned int result = 0;
    int i = 0;

    while (b[i] != '\0') {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        result = result * 2 + _atoi(&b[i]);
        i++;
    }

    return result;
}
