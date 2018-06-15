#include <stdio.h>

struct A{
  char a:2;
  char b:2;
  char c:5;
}A;

int main(){
  printf("%ld\n", sizeof(A));
}
