#include <stdio.h>

int main(){
  int ar[] = {0,1,2,3,4,5,6,7,8,9};
  for(int i = 0; i < 10; ++i){
    printf("%d ", ar[i]);
  }
  printf("\n");

  int *p = ar;
  for(int i = 0; i < 10; ++i){
    printf("%d ", *(p + i));
  }
  printf("\n");

  for(int i = 0; i < 10; ++i){
    printf("%d ", *(ar + i));
  }
  printf("\n");

  p = ar;
  for(;p < (ar + 10) ;p++){
    printf("%d ", *p);
  }
  printf("\n");
}
