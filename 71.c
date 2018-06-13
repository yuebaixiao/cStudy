#include <stdio.h>
#include <memory.h>

void* my_memset(void* dest, int c, size_t cnt){

}
int main(){
  int a[10];
  for(int i = 0; i < sizeof(a) / sizeof(int); ++i){
    printf("%d ", *(a+i));
  }
  printf("\n");
  memset(a,10,sizeof(a));
  for(int i = 0; i < sizeof(a) / sizeof(int); ++i){
    printf("%d ", *(a+i));
  }
  printf("\n");
}
