#include <stdio.h>
#include <memory.h>
#include <assert.h>

int my_memcmp(const void* s1, const void* s2, size_t cnt){
  assert(NULL != s1 && NULL != s2);

  const char *t1 = s1;
  const char *t2 = s2;

  int res = 0;
  while(cnt-- > 0){
    if(*t1 > *t2){
      res =1;
      break;
    }
    else if(*t1 < *t2){
      res = -1;
      break;
    }
    else{
      t1++;
      t2++;
    }
  }

  return res;
}

int main(){
  char* s1 = "abcdaaa";
  char *s2 = "abcdaa";

  int res = my_memcmp(s1,s2,18);
  if(0 == res)
    printf("s1 == s2\n");
  else if(res > 0)
    printf("s1 > s2\n");
  else
    printf("s1 < s2\n");

  int i1[] = {255,2,3,4,5};
  int i2[] = {511,22,23,5};

  int res1 = my_memcmp(i1,i2,1);
  if(0 == res1)
    printf("i1 == i2\n");
  else if(res1 > 0)
    printf("i1 > i2\n");
  else
    printf("i1 < i2\n");

}
