#include <stdio.h>

 int main() {
    int A[5] = {};
    int i = 0;
    int o;
    int q;
    int sum;
    sum = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&A[i]);
        sum = sum+A[i];
        
    }
    printf("Sum of entered numbers: %d",sum);
    printf("\n");
    printf("Numbers in array:");
    for (q = 0; q < 5; q++)
    {
        printf(" %d",A[q]);
    }
 return 0;
 }