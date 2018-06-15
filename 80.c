#include <stdio.h>

typedef struct A{
  char a;
  char b;
  char c;
}A;
//#pragma pack(4) 16
typedef struct B{//24
  int a;//占用4字节 + 4
  long b;//占用8字节
  char c;//占用1字节+ 7
}B;
typedef struct C{
  char a;
  int b;
  long c;
}C;
struct D{//32
  int a;//4 + 4
  struct S1{//16
    long b;//8
    char c;//1 + 1
    short d;//2 + 4
  } aa;
  int e;//4 + 4
}D;
struct E{//32
  int a;//4 + 4
  struct S2{//24
    short d;//2 + 6 
    long b;//8
    char c;//1 + 7
  } aa;
  int e;//4 + 4
}E;
struct F{//72
  int a;//4 + 4
  struct {//56
    short d[20];//40
    long b;//8
    char c;//1 + 7
  } ;
  int e;//4 + 4
}F;

int main(){
  printf("A size = %ld\n",sizeof(A));
  printf("B size = %ld\n",sizeof(B));
  printf("C size = %ld\n",sizeof(C));
  printf("D size = %ld\n",sizeof(D));
  printf("E size = %ld\n",sizeof(E));
  printf("F size = %ld\n",sizeof(F));
  B B1;
  B1.a = 10;
  B1.b = 12;
  B1.c = 'A';
}
