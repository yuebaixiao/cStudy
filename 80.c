#include <stdio.h>

typedef struct A{
  char a;
  char b;
  char c;
}A;
typedef struct B{
  int a;//占用4字节
  long b;//占用8字节
  char c;//占用1字节
}B;

int main(){
  printf("A size = %ld\n",sizeof(A));
  printf("B size = %ld\n",sizeof(B));

  B B1;
  B1.a = 10;
  B1.b = 12;
  B1.c = 'A';
  B B2;
  B2.a = 11;
  B1.b = 13;
  B1.c = 'B';
}
