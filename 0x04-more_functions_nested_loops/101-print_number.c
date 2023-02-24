#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n) {
    int digits = 0;
    int temp = n;

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    do {
        digits++;
        temp /= 10;
    } while (temp);

    while (digits--) {
        _putchar((n / (int)pow(10, digits)) % 10 + '0');
    }
}

