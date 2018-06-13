#include <stdio.h>
#include <memory.h>
#include <assert.h>

int main(){
  char* s1 = "abcdaaa";
  char *s2 = "abcdaa";

  int res = memcmp(s1,s2,18);
  if(0 == res)
    printf("s1 == s2\n");
  else if(res > 0)
    printf("s1 > s2\n");
  else
    printf("s1 < s2\n");
}
