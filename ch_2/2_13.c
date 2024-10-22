#include <stdio.h>

int bis(int x, int m);
int bic(int x, int m);
int bool_or(int x, int y);
int bool_xor(int x, int y);

int main()
{
  int val_a = 5; // 0101
  int val_b = 3; // 0011
  int or_res = bool_or(val_a, val_b); // 0111 -> 7
  int xor_res = bool_xor(val_a, val_b); // 0110 -> 6
  printf("5  or 3: %i\n", or_res);
  printf("5 xor 3: %i\n", xor_res);
  return 0;
}

int bis(int x, int m){
  return x | m;
}

int bic(int x, int m){
  return x & (~m);
}

int bool_or(int x, int y){
  int result = bis(x, y);
  return result;
}

int bool_xor(int x, int y){
  int result = bis(bic(x, y), bic(y, x));
  return result;
}

