#include <stdio.h>

int main(){
  char *p = "asdf";
  //p[0] = 's';//p指向的常量不可以更改
  printf("%s\n", p);
  char ar[3] = "abc";
  printf("%s\n", ar);
  //char br[] = ar;//数组间不可以赋值
}
