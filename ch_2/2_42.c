#include <stdint.h>
#include <stdio.h>

int32_t div16(int32_t x);

int main(){
  int32_t a = 16;
  int32_t b = -8;
  int32_t res_a = div16(a);
  int32_t res_b = div16(b);
  printf("a / 16 = %d\n", res_a);
  printf("a / 8 = %d\n", res_b);
}

int32_t div16(int32_t x){
  int32_t bias = (((x >> 31) & 1) << 4) - (x >> 31);
  return (x + bias) >> 4;
}
