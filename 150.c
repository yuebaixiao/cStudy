#include <stdio.h>

int main(){
  int ar[10] = {1,2,3,4,5,6,7,8,9,0};
  int* p1 = ar;
  int* p2 = &ar[0];
  int (*p3)[10] = &ar;

  int br[2][10];
  p3 = br;

  void *v;
}
