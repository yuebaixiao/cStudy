#include <stdio.h>
#include <string.h>


int main(){
  int a[10] = {1,2,3};
  int b[]= {22,33,44,55};
  //strcpy(a,b);
  memcpy(a,b,sizeof(int) * 4);
  for(int i = 0; i < sizeof(a) / sizeof(int); ++i){
    printf("%d ",*(a+i));
  }
  printf("\n");
}
