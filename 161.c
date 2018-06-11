#include <stdio.h>
#include <stdlib.h>

int main(){

  int *p = (int*)malloc(sizeof(int) * 5);
  if(NULL == p){

  }
  for(int i = 0; i < 5; ++i){
    *(p + i) = i;
  }
  
  for(int i = 0; i < 5; ++i){
    printf("%d ",*(p + i));
  }
  printf("\n");
  
  int *p1 = (int*)realloc(p,sizeof(int) * 800000);
  for(int k = 5; k < 8; ++k){
    *(p1 + k) = k;
  }
  
  for(int i = 0; i < 8; ++i){
    printf("%d ",*(p1 + i));
  }
  printf("\n");
  
  //free(p);
  free(p1);

  
}
