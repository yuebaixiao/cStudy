#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  printf("input n:>");
  scanf("%d", &n);

  int *p = (int*)malloc(sizeof(int) * n);
  if(NULL == p){

  }
  int *u = (int*)calloc(n, sizeof(int));
  for(int i = 0; i < n; ++i){
    *(p + i) = i;
  }
  for(int i = 0; i < n; ++i){
    printf("%d ", *(p + i));
  }
  printf("\n");
  for(int i = 0; i < n; ++i){
    *(u + i) = i;
  }
  for(int i = 0; i < n; ++i){
    printf("%d ", *(u + i));
  }
  printf("\n");
  free(p);
  free(u);
}
