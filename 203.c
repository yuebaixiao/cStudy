#include <stdio.h>

int main(){
  FILE* fp = fopen("./text1.txt", "r");
  if(NULL == fp){
    printf("error/n");
    return 1;
  }

  char cr[9];
  char c;
  c = fgetc(fp);
  for(int i = 0;c != EOF; ++i){
    cr[i] = c;
    c = fgetc(fp);
  }
  for(int i = 0; i < 9; ++i){
    printf("%c", cr[i]);
  }
  printf("\n");


  fclose(fp);
}
