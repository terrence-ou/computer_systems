#include <stdio.h>

typedef unsigned char *byte_ptr;

void show_byte(byte_ptr start, size_t len);
void show_short(short x);
void show_long(long x);

int main() {
    short a = 12532;
    long b = 17982374;
    show_short(a);
    show_long(b);
}

void show_byte(byte_ptr start, size_t len) {
    int i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_short(short x) { show_byte((byte_ptr)&x, sizeof(short)); }
void show_long(long x) { show_byte((byte_ptr)&x, sizeof(long)); }
