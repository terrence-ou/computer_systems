#include <stdio.h>

void decode1(long *, long *, long *);

int main() {
    long a = 0, b = 1, c = 2;
    printf("before decode1: a = %ld, b = %ld, c = %ld\n", a, b, c);
    decode1(&a, &b, &c);
    printf("after decode1: a = %ld, b = %ld, c = %ld\n", a, b, c);
}

void decode1(long *xp, long *yp, long *zp) {
    long x = *xp;
    long y = *yp;
    long z = *zp;

    *yp = x;
    *zp = y;
    *xp = z;
}
