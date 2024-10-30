#include <stdio.h>

int main() {
    int x = 1;
    unsigned char *byte_ptr = (unsigned char *)&x;
    if (byte_ptr[0] == 0x01) {
        printf("The machine is a little-endian machine.\n");
    } else {
        printf("The machine is a big-endian machine\n");
    }
}
