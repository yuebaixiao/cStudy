#include <stdio.h>

int main(){
  int *p = (int*)0x7fffffffe1e4;
  printf("int p=%p, p+1=%p\n", p,p+1);
  char *c = (char*)p;
  printf("char p=%p, p+1=%p\n", c,c+1);
  short *s = (short*)p;
  printf("short p=%p, p+1=%p\n", s,s+1);
  double *d = (double*)p;
  printf("double p=%p, p+1=%p\n", d,d+1);

  int ar[10] = {0};
  int (*pa)[10] = &ar;
  printf("ar[10] p=%p, p+1=%p\n", pa,pa+1);
}
