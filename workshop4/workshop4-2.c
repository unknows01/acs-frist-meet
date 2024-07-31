 #include <stdio.h>

 int main() {
    int A;
    int B;
    int i;
    A = 0;
    B = 1;
    for (i=0; i<5 ;i++)
    {
        printf("%d ",A);
        printf("%d ",B);
        A = A+B;
        B = B+A;
    }

 return 0;
 }