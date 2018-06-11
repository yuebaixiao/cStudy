#include <stdio.h>

int main(){
  char *p = "asdf";
  printf("%s\n", p);

  int i = 0;
  while(*p != '\0'){
    printf("%c ", *p);
    p++;
  }
  printf("\n");


  char ar[3] = "abc";
  printf("%s\n", ar);
  
}
