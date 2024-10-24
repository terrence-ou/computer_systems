#include <stdio.h>
#include <limits.h>

int tadd_ok(int x, int y);

int main(){
  int case_1 = tadd_ok(INT_MIN, -100);
  printf("case 1: %d\n", case_1);
  int case_2 = tadd_ok(-100, 50);
  printf("case 2: %d\n", case_2);
  int case_3 = tadd_ok(100, -50);
  printf("case 3: %d\n", case_3);
  int case_4 = tadd_ok(INT_MAX, 2);
  printf("case 4: %d\n", case_4);
}

int tadd_ok(int x, int y){
  int sum = x + y;
  if (x > 0 && y > 0 && sum < 0) return 0;
  else if (x < 0 && y < 0 && sum >= 0) return 0;
  return 1;
}
