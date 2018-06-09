#include <stdio.h>

int main(){
  FILE* fp = fopen("./text.txt", "r");
  if(NULL == fp){
    printf("error\n");
  }
  int ar[10];
  for(int i = 0; i < 10; ++i){
    fscanf(fp, "%d", (ar + i));
  }
  for(int i = 0; i < 10; ++i){
    printf("%d ",*(ar + i));
  }
  printf("\n");

  fclose(fp);
}
