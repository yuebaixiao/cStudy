#include <stdio.h>

struct A{
  char a:1;
  char b:1;
  char c:1;
}A;
struct B{
  char a:2;
  char b:2;
  char c:4;
}B;
struct B1{
  char a:2;
  char b:2;
  char c:5;
}B1;
struct C{
  int a:31;
  char b:1;
}C;
struct C1{
  int a:31;
  char b:2;
}C1;
struct C2{
  int a:1;
  char b:2;
}C2;

int main(){
  printf("A:%ld\n", sizeof(A));
  printf("B:%ld\n", sizeof(B));
  printf("B1:%ld\n", sizeof(B1));
  printf("C:%ld\n", sizeof(C));
  printf("C1:%ld\n", sizeof(C1));
  printf("C2:%ld\n", sizeof(C2));
  
  struct C sc;
  sc.a =10;
  sc.b = 1;
}
