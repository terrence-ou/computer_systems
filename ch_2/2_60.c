#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b);

int main() {
    unsigned a = replace_byte(0x12345678, 0, 0xAB);
    unsigned b = replace_byte(0x12345678, 1, 0xAB);
    unsigned c = replace_byte(0x12345678, 2, 0xAB);
    unsigned d = replace_byte(0x12345678, 3, 0xAB);
    printf("%x\n", a);
    printf("%x\n", b);
    printf("%x\n", c);
    printf("%x\n", d);
}

unsigned replace_byte(unsigned x, int i, unsigned char b) {
    if (i > 3) return x;
    unsigned left = (x >> (i * 2 + 2) * 4) << 8;
    unsigned right = (x << (8 - i * 2) * 4) >> ((8 - i * 2) * 4);
    left = (left + b) << i * 8;
    if (i == 0) return left;
    return left + right;
}
