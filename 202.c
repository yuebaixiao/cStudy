#include <stdio.h>
#include <string.h>

int main(){
  FILE *fp = fopen("./text1.txt", "w");
  if(NULL == fp){
    printf("error\n");
  }

  char cr[] = "getc putc";
  for(int i = 0; i < strlen(cr); ++i){
    putc(cr[i],fp);
  }
  putc('\n',fp);

  fclose(fp);
}
