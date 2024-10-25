#include <stdio.h>

#define M 31
#define N 8

int arith(int x, int y);
int optarith(int x, int y);

int main(){
  int a = 10;
  int b = 3;
  int res_a = arith(a, b);
  int res_b = optarith(a, b);
  printf("res_a: %d\tres_b: %d\n", res_a, res_b);
}

int arith(int x, int y){
  int result = 0;
  result = x * M + y / N;
  return result;
}

int optarith(int x, int y){
  int t = x;
  x <<= 5;
  x -= t;
  if (y < 0) y += 7;
  y >>= 3;
  return x + y;
}
