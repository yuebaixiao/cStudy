#include <stdio.h>
#include <string.h>

size_t my_strlen(const char* str){
  size_t count;
  while(*str++ != 0){
    count++;
  }
  return count;
}

int main(){
  char as[] = "hello C";
  printf("%ld\n",strlen(as));
  printf("%ld\n",my_strlen(as));
}
