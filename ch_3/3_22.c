#include <stdint.h>
#include <stdio.h>

int max_n_32();
int max_n_64();

int main() {
    int n_32 = max_n_32();
    printf("max n_32: %d\n", n_32);
    int n_64 = max_n_64();
    printf("max n_64: %d\n", n_64);
}

int max_n_32() {
    uint32_t val = 1;
    uint8_t n = 1;
    while (1) {
        if (val > UINT32_MAX / n) break;
        val *= n;
        n += 1;
    }
    return n - 1;
}

int max_n_64() {
    uint64_t val = 1;
    uint8_t n = 1;
    while (1) {
        if (val > UINT64_MAX / n) break;
        val *= n;
        n += 1;
    }
    return n - 1;
}