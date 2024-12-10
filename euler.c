#include <stdio.h>
float func(float x, float y)
{
   return x+y;   
}
int main(){
   float x0, y0, h, xn;
   printf("Enter x0 and y0: ");
   scanf("%f %f",&x0,&y0);
   printf("Enter xn :"); // given interval for this find y
   scanf("%f", &xn);
   printf("Enter h :");
   scanf("%f", &h);
   
   while (x0 < xn)
   {
      y0 = y0 + h * func(x0, y0);     // Update the value of y by using Euler formula
      x0 = x0 + h;                   // increament by h
   }
   printf("\nValue of y at  %.3f is : %.3f\n", x0, y0);
}
