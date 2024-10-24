#include <stdint.h>
#include <stdio.h>
#include <limits.h>

int tmult_ok(int x, int y);

int main(){
  int a = INT_MAX;
  int b = 2;
  int res = tmult_ok(a, b);
  printf("result: %d\n", res);
}

int tmult_ok(int x, int y){
  int res_a = x * y;
  int64_t res_b = (int64_t) x * (int64_t) y; 
  return (int64_t) res_a == res_b;
}
