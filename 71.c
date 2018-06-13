#include <stdio.h>
#include <memory.h>
#include <assert.h>

void* my_memset(void* dest, int c, size_t cnt){
  assert(NULL != dest);
  char *a = (char*)dest;
  while(cnt-- > 0){
    *a++ = c;
  }  

  return dest;
}
int main(){
  int a[10];
  for(int i = 0; i < sizeof(a) / sizeof(int); ++i){
    printf("%d ", *(a+i));
  }
  printf("\n");
  my_memset(a,0,sizeof(a));
  for(int i = 0; i < sizeof(a) / sizeof(int); ++i){
    printf("%d ", *(a+i));
  }
  printf("\n");
}
