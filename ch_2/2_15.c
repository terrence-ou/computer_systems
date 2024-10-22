#include <stdio.h>

int main(){
  int x = 8;
  int y = 10;
  printf("x = 8, y = 10, result: %i\n", !(x ^ y));
  x = 20;
  y = 20;
  printf("x = 20, y = 20, result: %i\n", !(x ^ y));
}

