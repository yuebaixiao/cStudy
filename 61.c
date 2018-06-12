#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <malloc.h>

char* my_strcat(char* strd, const char* strs){
  assert(strd != NULL && strs != NULL);
  char *tmp = strd;
  while(*tmp++ != 0){}
  tmp--;
  while(*strs != 0){
    *(tmp++) = *strs++;
  }
  *tmp = '\0';
  return strd;
}

int main(){
  char s1[20] = "hello";
  char s2[] = " C";
  printf("strcat before s1 = %s\n", s1);
  char *str = my_strcat(s1,s2);
  printf("strcat after s1 = %s\n", s1);
  printf("strcat after str = %s\n", str);
}
