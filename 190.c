#include <stdio.h>

typedef struct Student{
  char *name;
  int age;
}Stu, *pStu;
int main(){
  Stu s1, s2;
  pStu p1,p2;
  p1 = &s1;
  p2 = &s2;
}
