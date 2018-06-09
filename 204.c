#include <stdio.h>

int main(){
  FILE *fp = fopen("./text2.txt", "w");
  if(NULL == fp){
    printf("error\n");
    return 1;
  }
  char *s = "gets puts";
  fputs(s,fp);
  fputc('\n',fp);
  fclose(fp);
}
