#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <malloc.h>

int my_strcmp(const char *s1, const char *s2){
  
  assert(NULL != s1 && NULL != s2);
  int res = 0;
  while(*s1 != '\0' || *s2 != '\0'){
    if(*s1 > *s2){
      res = 1;
      break;
    }else if(*s1 < *s2){
      res = -1;
      break;
    }else{
      s1++;
      s2++;
    }
  }
  return res;
}

int main(){
  char *s1 = "a1123";
  char *s2 = "a1123";
  int res = my_strcmp(s1, s2);
  if(res == 0){
    printf("s1 == s2\n");
  }else if(res > 0){
    printf("s1 > s2\n");
  }else{
    printf("s1 < s2\n");
  }
}
