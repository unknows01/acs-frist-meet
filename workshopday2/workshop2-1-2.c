#include <stdio.h>

 int main() {
    int arr[3][3] = {},i,j,max,A,temp;

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
            if (arr[i][j] < arr[i][j+1])
            {
            temp = arr[i][j];
                arr[i][j] = arr[i][j+1];
                arr[i][j+1] = temp;
            }
        }
        
    }
    
    max=arr[0][0];
    printf("The maximum value in the matrix is: %d",max);

    return 0;
 }