#include <stdio.h>

int main(){
  FILE *p1 = fopen("./200.c", "r");
  if(NULL == p1){
    printf("error\n");
    return 1;
  }

  FILE *p2 = fopen("./dist.txt", "w");
  if(NULL == p2){
    printf("error\n");
    return 1;
  }
  char c = fgetc(p1);
  while(c != EOF){
    fputc(c, p2);
    c = fgetc(p1);
  }
  
  fclose(p1);
  fclose(p2);
}

