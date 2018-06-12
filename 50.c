#include <stdio.h>
#include <string.h>

char str6[10];
int main(){
  //7 8
  char str1[] = "hello c";
  printf("strlen = %ld\n", strlen(str1));
  printf("sizeof = %ld\n", sizeof(str1));

  //7 10
  char str2[10] = "hello c";
  printf("strlen = %ld\n", strlen(str2));
  printf("sizeof = %ld\n", sizeof(str2));

  //12 5
  char str3[5] = "hello c";
  printf("strlen = %ld\n", strlen(str3));
  printf("sizeof = %ld\n", sizeof(str3));

  //12 5
  char str4[] = {'h','e','l','l','o',' ','C'};
  printf("strlen = %ld\n", strlen(str4));
  printf("sizeof = %ld\n", sizeof(str4));

  char str5[10] = {'h','e','l','l','o',' ','C'};
  printf("strlen = %ld\n", strlen(str5));
  printf("sizeof = %ld\n", sizeof(str5));

  printf("strlen = %ld\n", strlen(str6));
  printf("sizeof = %ld\n", sizeof(str6));

  char str7[10];
  printf("strlen = %ld\n", strlen(str7));
  printf("sizeof = %ld\n", sizeof(str7));
}
