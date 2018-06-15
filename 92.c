#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct Test{
  int a;
  long b;
} Test;

int main(){
  char* str = "i am out of struct Test";
  Test* tp =  (Test*) malloc(sizeof(Test) + strlen(str) + 1);
  tp->a = 10;
  tp->b = 11;
  strcpy((char*)(tp+1), str);
  printf("%s\n", (char*)(tp+1));
  free(tp);
  
}
