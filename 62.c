#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <malloc.h>

char* my_strcpy(char* strd, const char* strs){
  assert(NULL != strd && NULL != strs);
  char* tmp = strd;
  while(*strs != '\0'){
    *tmp++ = *strs++;
  }
  *tmp = '\0';
  return strd;
}
int main(){
  char s1[20] = "hello";
  char s2[] = " wod";
  printf("strcpy before s1 = [%s]\n", s1);
  char *str = my_strcpy(s1,s2);
  printf("strcpy after s1 = [%s]\n", s1);
  printf("strcat after str = [%s]\n", str);
}
