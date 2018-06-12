#include <stdio.h>
#include <string.h>
#include <assert.h>

size_t my_strlen(const char* str){
  assert(str != NULL);
  
  const char *tmp = str;

  size_t count = 0;
  while(*tmp++ != '\0'){
    count++;
  }
  return count;
}

size_t my_strlen1(const char* str){
  assert(str != NULL);
  if(*str == 0){
    return 0;
  }else{
    return my_strlen1(str+1) + 1;
  }
}

int main(){
  char as[] = "hello C";
  printf("%ld\n",strlen(as));
  printf("%ld\n",my_strlen(as));
  printf("%ld\n",my_strlen1(as));
}
