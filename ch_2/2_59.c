#include <stdio.h>

int main() {
    unsigned x = 0x89ABCDEF;
    unsigned y = 0x76543287;
    unsigned output = (x & 0xFFFFFF00) + (y & 0xFF);
    printf("0x%x\n", output);
}
