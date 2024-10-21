#include <stdio.h>

void print_hex(int val) { printf("0x%x\n", val); }

int main() {
    int x = 0x87654321;
    int mask_a = 0xFF;
    int mask_b = ~0xFF;
    printf("A: ");
    print_hex(x & mask_a);
    printf("B: ");
    print_hex(x ^ mask_b);
    printf("C: ");
    print_hex(x | mask_a);
}
