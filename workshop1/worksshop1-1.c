#include <stdio.h>

int main() {
  int A;
  printf("Type Number");
  scanf("%d",&A);
  int B;
  printf("Type Number");
  scanf("%d",&B);
  int F = A/B ;
  int T = A%B;
  printf("%d,%d", F,T);

return 0;
}