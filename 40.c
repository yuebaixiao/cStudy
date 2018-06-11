#include <stdio.h>
#include <stdlib.h>

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

int **arr3(int* a, int* b){
  int **p = (int**)malloc(sizeof(int*) * 2);
  p[0] = a;
  p[1] = b;
  return p;
}

int arr2(int* a){
  return 200;
}

int main(){
  int a = 10;
  int b = 20;
 
  int (*p)[2] = getAr();
  for(int i = 0; i < 2; ++i){
    printf("%d ", (*p)[i]);
  }
  printf("\n");

 
  int *(*(*fun)(int* a, int* b))[];
  fun = &arr;
  int *c = (*fun)(&a,&b);
  printf("c[0] = %d\n",c[0]);
  printf("c[1] = %d\n",c[1]);  


  fun = &arr1;
  int d = fun(&a,&b);
  printf("d = %d\n",d);  
  
  //fun = &arr2;
  // int e = fun(&a);
  //printf("e = %d\n",e);

  fun = &arr3;
  int **f = (*fun)(&a,&b);
  printf("f[0] = %p\n",f[0]); 
  printf("f[0] = %p\n",f[1]);
  printf("*f[0] = %d\n",*f[0]);
  printf("*f[1] = %d\n",*f[1]);  
}
