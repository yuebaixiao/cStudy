#include <stdio.h>

#define CHAR1 char*

typedef char* CHAR2;

int main(){
  char c = 'a';

  CHAR1 pc1,pc2;
  pc1 = &c;
  pc2 = c;
  *pc1 = 'w';
  printf("%c ", c);

  CHAR2 pc3,pc4;
  pc3 = &c;
  pc4 = &c;
  *pc4 = 'e';
  printf("%c ", c);
}
