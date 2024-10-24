#include <stdio.h>
#include <limits.h>

int uadd_ok(unsigned x, unsigned y);

int main(){
  unsigned a = UINT_MAX;
  unsigned b = 1;
  int result_1 = uadd_ok(a, b);
  printf("UINT_MAX + 1: %d\n", result_1);

  unsigned x = 10;
  unsigned y = 20;
  int result_2 = uadd_ok(x, y);
  printf("x + y: %d\n", result_2);
}

int uadd_ok(unsigned x, unsigned y){
  unsigned s = x + y;
  if (s < x) return 0;
  return 1;
}
