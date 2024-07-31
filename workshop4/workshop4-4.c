 #include <stdio.h>

 int main() {
    int A;
    int o;
    int B;
    int sum;
    sum = 0;
    for ( o = 0; o < 10; o++)
    {
        scanf("%d",&A);
        sum = A+sum;
           if (A<=0)
           break;
    } 

    printf("%d",sum);
 return 0;
 }