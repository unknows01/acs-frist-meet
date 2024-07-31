#include <stdio.h>

 int main() {
    int A;
    scanf("%d",&A);
    int o;
    int i;
    for ( o = 0; o < A; o++)
    
    {
        
        for (i = 0; i <= o; i++)
        {
            printf("*");

        }
        printf("\n");
    } 
    
 return 0;
 }