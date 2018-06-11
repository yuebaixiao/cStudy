#include <stdio.h>
#include <stdlib.h>

void fun(int a){
  printf("fun:%d\n", a);
}

void fun1(void (*f)(int),int a){
  f(a);
}

int gun(int a){
  printf("gun:%d\n", a);
}

int gun1(int a, int(*f)(int)){
  printf("gun1:%d\n", a);
}
int (*hun(int a))[]{
  int (*p)[3] = (int(*)[3])malloc(sizeof(int[3]) * 2);
  (*p)[0] = a+1;
  //p[0][0] = a+1;
  p[0][1] = a+2;
  p[0][2] = a+3;
  (*(p+1))[0] = a+11;
  //下面写法是错误的，p+1两侧必须加括号
  //(*p+1)[0] = a+11;
  p[1][1] = a+22;
  (*(p+1))[2] = a+33;

  return p;
}
int *(*hun1(int a))[]{
  int* (*p)[3] = (int*(*)[3])malloc(sizeof(int*[3]) * 2);
  int *w1 = (int*)malloc(sizeof(int));
  *w1 = 10+a;
  int *w2 = (int*)malloc(sizeof(int));
  *w2 = 20+a;
  int *w3 = (int*)malloc(sizeof(int));
  *w3 = 30+a;
  int *w4 = (int*)malloc(sizeof(int));
  *w4 = 40+a;
  int *w5 = (int*)malloc(sizeof(int));
  *w5 = 50+a;
  int *w6 = (int*)malloc(sizeof(int));
  *w6 = 60+a;
  (*p)[0] = w1;
  p[0][1] = w2;
  p[0][2] = w3;
  (*(p+1))[0] = w4;
  p[1][1] = w5;
  (*(p+1))[2] = w6;
  
  return p;
}
int jun(int a, int b){
  printf("a:%d,b:%d\n",a,b);
  return a+b;
}

int main(){
  //指针数组，数组里是函数指针，指向的函数没有返回值，1个int参数
  void (*a[1])(int);
  a[0] = &fun;
  (*a[0])(1);
  //指针数组，数组里是函数指针，指向的函数没有返回值，2个参数。第一个参数是函数指针，指向的函数没有返回值，1个int参数；第二个参数是int
  void (*b[1])(void(*)(int),int);
  b[0] = &fun1;
  (*b[0])(a[0],10);
  
  //指针数组，数组里是函数指针，指向的函数的返回值是int，1个int参数
  int (*c[1])(int);
  c[0] = &gun;
  (*c[0])(3);
  //指针数组，数组里是函数指针，指向的函数的返回值是int，2个参数。第一个参数是int;第二个参数是函数指针，指向的函数的返回值是int，1个int参数。
  int(*d[1])(int, int(*)(int));
  d[0] = &gun1;
  (*d[0])(120,c[0]);

  //指针数组，数组里是函数指针，指向的函数的返回值是数组指针，数组里是int，1个int参数。  
  int (*(*e[1])(int))[];
  e[0] = &hun;
  int (*p)[3] = (*e[0])(3);
  for(int i = 0; i < 2; ++i){
    for(int j = 0; j < 3; ++j){
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }
  free(p);

  //指针数组，数组里是函数指针，指向的函数的返回值是数组指针，数组里是int指针，1个int参数。  
  int *(*(*g[1])(int))[];
  g[0] = &hun1;
  int* (*p1)[3] = (*g[0])(10);
  for(int i = 0; i < 2; ++i){
    for(int j = 0; j < 3; ++j){
      printf("%d ", *p1[i][j]);
    }
    printf("\n");
  }
  free(p1);

  int (*j[1])(int,int);
  j[0] = &jun;
  (*j[0])(2,3);

  int (*(*k)[2])(int,int);
  k = (int*)malloc(sizeof(int*) * 2);
  (*k)[0] = &jun;
  (*k)[0](3,4);
  (*k)[1] = &jun;
  (*k)[1](30,42);
  free(k);
}
