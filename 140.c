#include <stdio.h>

int max(int a, int b){
  return a > b ? a : b;
}

int min(int a, int b){
  return a > b ? b : a ;
}

int exe(int a, int b, int(*pf)(int, int)){
  return (*pf)(a,b);
}
int main(){
  int a = 10;
  int b = 30;

  //返回值 函数指针 参数列表
  int (*pfun)(int, int);

  //方法1
  pfun = &max;
  int result = (*pfun)(a, b);
  printf("%d\n", result);

  //方法2
  pfun = max;
  int r1 = pfun(a, b);
  printf("%d\n", r1);

  int i;
  scanf("%d",&i);
  int (*pf)(int,int);
  if(i){
    pf = &max;
  }else{
    pf = &min;
  }

  int r2 = exe(a, b, pf);
  printf("rs:%d\n", r2);
}
