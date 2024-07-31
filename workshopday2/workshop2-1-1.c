#include <stdio.h>
#include <stdio.h>
#define PI 3.14

 int main() {
    int D;
    float W;
    float H;
    float WH;
    float B;
    float BH;
    float R;
    float P;
    float RP;
    printf("1. Rectangle\n2. Triangle\n3. Circle\nEnter your choice: ");
    scanf("%d",&D);
    if (D == 1 )
    {
      printf("Enter the width: ");
      scanf("%f",&W);
      printf("Enter the height: ");
      scanf("%f",&H);
      WH = W*H;
      if (WH < 0 || W < 0 || H<0)
      {
      printf("The area of the rectangle is: Error");
      }
      else{
      printf("The area of the rectangle is: %.2f",WH);}
   }
    else if (D == 2)
    {
      printf("Enter the base: ");
      scanf("%f",&B);
      printf("Enter the height: ");
      scanf("%f",&H);
      BH = 0.5 * (B*H) ;
      if (BH < 0 || B < 0 ||H<0)
      {
      printf("The area of the triangle is: Error");
      }
      else
      {
      printf("The area of the triangle is: %.2f",BH);
      }
    }
    else if (D == 3)
    {
      printf("Enter the radius: ");
      scanf("%f",&R);
      RP = PI * (R*R);
      if (RP < 0 || R < 0)
      {
      printf("The area of the circle is: Error");
      }
      else
      {
      printf("The area of the circle is: %.2f",RP);
      }
    }
    else
    printf("Invalid choice");

    return 0;
 }