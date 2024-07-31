 #include <stdio.h>

 int main() {
    int A;
    scanf("%d",&A);
    int i;
    int j;
    for (i=1; i<13 ;i++)
    {
        j = A * i ;
        printf("%d * %d = %d\n",A,i,j);
    }

 return 0;
 }