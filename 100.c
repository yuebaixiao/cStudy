#include <stdio.h>
#include <string.h>

int main(){
  char a[3] = {'a', 'b', '\0'};
  printf("size:%d\n", sizeof(a));
  printf("length:%d\n", strlen(a));
 
  char b[2] = {'a'};
  printf("con:%s\n", b);
}
