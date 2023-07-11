#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */


void print_binary(unsigned long int n) {
    if (n == 0) {
        _putchar('0');
        return;
    }

    int count = 0;

    for (int i = 63; i >= 0; i--) {
        unsigned long int current = get_bit(n, i);

        if (current) {
            _putchar('1');
            count++;
        } else if (count) {
            _putchar('0');
        }
    }

    if (!count)
        _putchar('0');
}
