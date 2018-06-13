#include <stdio.h>
#include <memory.h>
#include <assert.h>

void* my_memcpy(void* dest, const void* src, size_t cnt){
  assert(NULL != dest && NULL != src);
  char *tmp = dest;
  return dest;
}


int main(){
  char s1[4] = {'a','f','r','t'};
  char *s2 = "abcdasadfsdfsada";
 
  char *s3 = memcpy(s1,s2,15);
  printf("s1 = [%s]\n", s1);
  printf("s3 = [%s]\n", s3);

  int i1[] = {1,2};
  int i2[] = {11,22,33,3};
  int i3[2] = {1};
  int *pi3  = i3;
  pi3 = (int*)memcpy(i1,i2,sizeof(int) * 2);
  for(int i = 0; i < sizeof(i2) / sizeof(int) + 1; ++i){
    printf("i1[%d] = %d ",i, i1[i]);
  }
  printf("\n");

  for(int i = 0; i < sizeof(i2) / sizeof(int) + 1; ++i){
    printf("i3[%d] = %d ",i, pi3[i]);
  }
  printf("\n");
}
