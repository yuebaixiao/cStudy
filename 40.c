#include <stdio.h>
#include <stdlib.h>

int* max(int* a, int* b){
  return *a > *b ? a : b;
}
int* min(int* a, int* b){
  return *a > *b ? b : a;
}

int (*getAr())[2]{
  int (*p)[2] = (int(*)[2])calloc(2, sizeof(int));
  for(int i = 0; i < 2; ++i){
    (*p)[i] = i;
  }
  
  return p;
}

int *arr(int* a, int* b){
  printf("%d, %d\n",*a,*b);
  int *p = (int*)malloc(sizeof(int) * 2);
  p[0] = *a;
  p[1] = *b;
  return p;
}

int arr1(int* a,int* b){
  return 100;
}

int main(){
  int a = 10;
  int b = 20;

  int *(*(*fun)(int* a, int* b))[2];
  fun = &arr;
  int *c = (*fun)(&a,&b);
  printf("c[0] = %d\n",c[0]);


  fun = &arr1;
  int d = fun(&a,&b);
  printf("d = %d\n",d);  
  

  int (*p)[2] = getAr();
  for(int i = 0; i < 2; ++i){
    printf("%d ", (*p)[i]);
  }
  printf("\n");
}
