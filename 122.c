#include <stdio.h>

void show_(int* br)
{
  for(int i = 0; i < 10; ++i){
    printf("%d ", *(br + i));
  }
  printf("\n");
}

void show(int* br){
  for(int i = 0; i < 10; ++i){
    printf("%d ", (*(br + i))++);
  }
  printf("\n");
}

int main(){
  int ar[] = {0,1,2,3,4,5,6,7,8,9};
  printf("size:%d\n", (int)sizeof(ar));
  show(ar);
  show_(ar);
}
