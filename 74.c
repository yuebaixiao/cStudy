#include <stdio.h>
#include <memory.h>
#include <assert.h>

void* my_memmove(void* dest, const void* src, size_t cnt){

  assert(NULL != dest && NULL != src);

  char* tmp = dest;
  const char* st = src;
  if(tmp > st && st + cnt > tmp){
    while(cnt-- > 0){
      *(tmp + cnt) = *(st + cnt);
    }
  } else {
    while(cnt-- > 0){
      *tmp++ = *st++;
    }
  }

  return dest;
}

int main(){
  char s1[20] = {'a','b','c','d'};
  char *s2 = "xyzdef";
 
  char *s3 = my_memmove(s1,s1+1,3);
  printf("s1 = [%s]\n", s1);
  printf("s3 = [%s]\n", s3);

  
  char s11[20] = {'a','b','c','d'};
  char *s22 = "xyzdef";
 
  char *s33 = memmove(s11,s11+1,3);
  printf("s11 = [%s]\n", s11);
  printf("s33 = [%s]\n", s33);  
  
  
  int i1[10] = {1,2};
  int i2[10] = {11,22,33,3};
  int i3[10] = {1};
  int *pi3  = i3;
  pi3 = (int*)my_memmove(i2+2,i2,sizeof(int) * 3);
  for(int i = 0; i < sizeof(i2) / sizeof(int); ++i){
    printf("i1[%d] = %d ",i, i2[i]);
  }
  printf("\n");

  for(int i = 0; i < sizeof(i2) / sizeof(int); ++i){
    printf("i3[%d] = %d ",i, pi3[i]);
  }
  printf("\n");

}
