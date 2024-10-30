#include <stdio.h>

int int_shifts_are_arithmetic();

int main() {
    int result = int_shifts_are_arithmetic();
    printf("%d\n", result);
}

int int_shifts_are_arithmetic() {
    unsigned x = 0xF0000000;
    unsigned shift = x >> 8;
    return shift >> 31;
}
