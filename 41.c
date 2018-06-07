#include <stdio.h>

int fun(int d=1){
  return d;
}
int main(){
  fun(1);
  printf("%d\n", sizeof(int));
  char c = 41;
  printf("%c\n", c);

}
