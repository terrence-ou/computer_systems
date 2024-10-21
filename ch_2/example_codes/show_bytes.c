#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) { show_bytes((byte_pointer)&x, sizeof(int)); }
void show_float(float x) { show_bytes((byte_pointer)&x, sizeof(float)); }

int main() {
    int i_val = 3510593;
    float f_val = (float)i_val;
    char *str = "12345";
    show_int(i_val);
    show_float(f_val);
    show_bytes((byte_pointer)str, 6);
}
