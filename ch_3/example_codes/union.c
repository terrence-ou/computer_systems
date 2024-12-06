#include <stdio.h>

unsigned long double2bits(double d);
double uu2double(unsigned word0, unsigned word1);

int main() {
    double d = -1000.0;
    unsigned long u = double2bits(d);
    printf("convert double to unsigned long: %f -> %lu\n", d, u);
    unsigned word0 = 1024;
    unsigned word1 = 2048;
    double d2 = uu2double(word0, word1);
    printf("convert two unsiged to a double: %d, %d -> %f\n", word0, word1, d2);
}

// for type conversion
unsigned long double2bits(double d) {
    union {
        double d;
        unsigned long u;
    } temp;
    temp.d = d;
    return temp.u;
}

double uu2double(unsigned word0, unsigned word1) {
    union {
        unsigned u[2];
        double d;
    } temp;
    temp.u[0] = word0;
    temp.u[1] = word1;
    return temp.d;
}