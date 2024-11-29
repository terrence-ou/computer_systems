#include <stdio.h>

int main() {
    char A[12];
    char *B[8];
    int C[6];
    double *D[5];

    printf("size of A[12]: %d\n", (unsigned)sizeof(A));
    printf("size of *B[6]: %d\n", (unsigned)sizeof(B));
}
