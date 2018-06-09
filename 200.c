#include <stdio.h>

int main(){
  int ar[] = {12,23,34,45,56,67,78,89,90,100};
  FILE* fp = NULL;
  fp = fopen("./text.txt","w");
  if(NULL == fp){
    printf("error\n");
  }
  for(int i = 0; i < sizeof(ar) / sizeof(int); ++i){
    printf("%d ", *(ar + i));
  }
  printf("\n");
  for(int i = 0; i< sizeof(ar) / sizeof(int); ++i){
    fprintf(fp, "%d ", *(ar + i));
  }
  fprintf(fp,"\n");

  fclose(fp);
}
