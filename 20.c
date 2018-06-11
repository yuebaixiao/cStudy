#include <stdio.h>

int main(){
  int i = 123456789;
  char *c = (char*)&i;
  printf("char:%d\n", *c);
  short *s = (short*)&i;
  printf("short:%d\n", *s);
  int *pi = &i;
  printf("int:%d\n", *pi);
  printf("char:%d\n", sizeof(c));
  printf("char:%d\n", sizeof(&i));
}
