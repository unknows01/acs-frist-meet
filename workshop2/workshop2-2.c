#include <stdio.h>

int main() {
  int A;
  scanf("%d",&A);  
  if (A%400 == 0 || (A%4 == 0 && A%100 !=0))
    printf("%d is a leap year. February has 29 days.",A);
  else
    printf("%d is not a leap year. February has 28 days.",A);

return 0;
}