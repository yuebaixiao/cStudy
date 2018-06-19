#include <stdio.h>
#include <malloc.h>

typedef struct Test{
  int i;
  int ary[0];
  
}Test;
int main(){
  int len;
  scanf("%d", &len);

  int ar[len];

  
  Test* t = (Test*)malloc(sizeof(Test) + (sizeof(int) * len));
  for(int i = 0; i < len; ++i){
    t->ary[i] = i + 1;
    ar[i] = i + 1;
  }
  for(int j = 0; j < len; ++j){
    printf("%d,%d ",t->ary[j],ar[j]);
  }
  printf("\n");
  free(t);
}
