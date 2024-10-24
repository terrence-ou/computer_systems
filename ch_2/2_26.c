#include <stdio.h>
#include <string.h>

int strlonger_wrong(char *a, char *b);
int strlonger(char *a, char *b);

int main(){
  char *a = "shorter string";
  char *b = "this is a longer string";
  int result_a = strlonger_wrong(a, b);
  int result_b = strlonger(a, b);
  printf("result a (wrong): %d\tresult b: %d\n", result_a, result_b);
}

int strlonger_wrong(char *a, char *b){
  return strlen(a) - strlen(b) > 0;
}

int strlonger(char *a, char *b){
  return strlen(a) > strlen(b);
}
