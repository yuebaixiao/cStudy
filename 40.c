#include <stdio.h>

int* max(int* a, int* b){
  return *a > *b ? a : b;
}
int* min(int* a, int* b){
  return *a > *b ? b : a;
}

int (*getAr())[10]{
  int (*p)[10] = (int(*)[10])calloc(10, sizeof(int));
  for(int i = 0; i < 10; ++i){
    (*p)[i] = i;
  }
  
  return p;
}

int main(){
  int a = 10;
  int b = 20;
 

  int (*(*fun)(int* a, int* b))[2];
  fun[0] = (int*)1;

  int (*p)[10] = getAr();
  for(int i = 0; i < 10; ++i){
    printf("%d ", (*p)[i]);
  }
  printf("\n");
}
