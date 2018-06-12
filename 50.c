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

  char *p = "hello C";
  printf("strlen = %ld\n", strlen(p));
  printf("sizeof = %ld\n", sizeof(p));

  char *p1[3] = {"hello C","abcd","12345"};
  printf("p1 strlen = %ld\n", strlen(*p1));
  printf("p1 strlen = %ld\n", strlen(*(p1+1)));
  printf("p1 strlen = %ld\n", strlen(*(p1+2)));
  printf("p1 sizeof = %ld\n", sizeof(p1));

  char (*p2)[3000];
  printf("p2 sizeof = %ld\n", sizeof(p2));

  char cr[] = {'a','b','\0','c',};
  printf("cr strlen = %ld\n", strlen(cr));
  printf("cr sizeof = %ld\n", sizeof(cr));
  
}
