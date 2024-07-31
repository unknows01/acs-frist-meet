 #include <stdio.h>

 int main() {
   float W;
   scanf("%f",&W);
   float H;
   scanf("%f",&H);
   float BMI = W/(H*H);
   if (BMI >= 30)
    printf("Your BMI is %.2f\nYou are obese.",BMI);
   
   else if (BMI >= 25)
    printf("Your BMI is %.2f\nYou are overweight.",BMI);
   else if (BMI >= 18.5)
    printf("Your BMI is %.2f\nYou are normal weight.",BMI);
   else
    printf("Your BMI is %.2f\nYou are underweight.",BMI);
 return 0;
 }