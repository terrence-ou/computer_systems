#include <stdio.h>

int with_one(int x);
int with_zero(int x);
int least_bits_with_one(int x);
int most_bits_with_zero(int x);

int main() {
    int a = with_one(0x00000000);
    int b = with_zero(0xFFFFFFFF);
    int c = least_bits_with_one(0xFFFFFF00);
    int d = most_bits_with_zero(0xFFFFFFFF);
    printf("Any bit of x equals 1: %d\n", a);
    printf("Any bit of x equals 0: %d\n", b);
    printf("Any bit in the least significant byte of x equals 1: %d\n", c);
    printf("Any bit in the most significant byte of x equals 0: %d\n", d);
}

int with_one(int x) { return x | 0x00000000; }
int with_zero(int x) { return x ^ 0xFFFFFFFF; }
int least_bits_with_one(int x) { return x & 0xFF; }
int most_bits_with_zero(int x) { return (x & 0xFF000000) ^ 0xFF000000; }
