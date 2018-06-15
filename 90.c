#include <stdio.h>

extern int fun(int a);
extern int x;


int main(){
  x = 22;
  fun(x);
}
int x;
int fun(int b){
  printf("b = %d\n",b);
  return b;
}
