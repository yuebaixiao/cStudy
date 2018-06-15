#include <stdio.h>

struct Test{
  int a;
  long b;
  char* c;
};

int main(){
  char *str = "asd";
  struct Test t;
  t.c = str;
  printf("%s\n", t.c);
}
