#include <stdio.h>

int main(){
  FILE *fp = fopen("./text2.txt", "r");
  if(NULL == fp){
    printf("error\n");
    return 1;
  }
  char *s;
  fgets(s, 10,fp);
  printf("%s\n", s);
  fclose(fp);
}
