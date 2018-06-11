#include <stdio.h>

int max(int a, int b){
  return a > b ? a : b;
}

int(*pfun)(int, int);

int fun(int a, int b, int(*f)(int, int)){
  return (*f)(a,b);
}
int* fun2(int a, int b, int(*f)(int, int)){
  static int i;
  i = (*f)(a,b); 
  return &i;
}
int(*fun1(int a, int b, int(*f)(int, int)))(int, int){
  return f;
}

typedef int(*pf)(int,int);
pf fun3 (int a, int b, pf f){
  return f;
}

int main(){

  pfun = &max;
  int i;
  i = (*pfun)(3,2);
  printf("%d\n", i);

  i = fun(23,34, max);
  printf("%d\n", i);

  int *j;
  j = fun2(43,56,max);
  printf("j = %d\n", *j); 
  
  pfun = fun1(23,44,max);
  i = (*pfun)(45,67);
  printf("pfun %d\n", i);
  
  pfun = fun3(23,44,max);
  i = (*pfun)(451,267);
  printf("pfun %d\n", i);
}
