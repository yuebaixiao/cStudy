#include <stdio.h>
#include <string.h>

void fun(char* str){
  printf("strlen = %ld\n", strlen(str));
  printf("sizeof = %ld\n", sizeof(str));
}
int main(){
  char str[10] = "Hello C";
  printf("strlen = %ld\n", strlen(str));
  printf("sizeof = %ld\n", sizeof(str));
  printf("-------------------------------------\n");
  fun(str);
}
