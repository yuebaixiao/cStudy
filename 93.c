#include <stdio.h>

typedef struct Test{
  int a;
  long b;
  char pc[0]; 
}Test;

int main(){

  int a;
  long b;
  long c;
  long dd;
  char str[] = "1Hello c Hello c++!";
  Test t;
  
  long ee;
  Test t1;
  char str1[] = "2Hello c Hello c++!";  
  printf("%s\n",t.pc);
  printf("%s\n",t1.pc);  
}
