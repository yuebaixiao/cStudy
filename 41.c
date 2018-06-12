#include <stdio.h>

int fun(int d){
  return d;
}
int main(){
  fun(1);
  printf("%d\n", (int)sizeof(&fun));
  char c = 41;
  printf("%c\n", c);

}
