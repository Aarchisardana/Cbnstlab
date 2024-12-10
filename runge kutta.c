 to remember 
. 2 function bnao 
. one for function and one for formula usme for loop for iteration so calculate n by x = x0 +n*h 
.remember  y= y0
    y = y+ .......
   and after formula 
 xo =xo+h  for iteration increasing 
  then return y
  while calling in main ( x0,y0 
 yehi pass  hoghae dont worry 
   

code:

#include <stdio.h>
 float f (float x, float y ){    // yha pae because xcube bhi pass kroghe toh bhi  float y pass krnh pdegah 
      return x+y  ;
 }
   float rungekutta(float x0 , float y0, float h , float x ){
      // x=x0+n*h
        int n =  (int)((x-x0)/h);
        float k1, k2 ,k3, k4 ;
         float y = y0;                      // Initial value of y   // to remember 
         for( int i=1; i<=n ; i++){
           k1 = h*f(x0 , y );
           k2=  h*f(x0+h*0.5 ,y+k1*0.5);
           k3=  h*f(x0+h*0.5 ,y+k2*0.5);
           k4=  h*f(x0+h ,  y+k3);
            y =y+ (1.0/6.0) * (k1+ 2*k2 + 2*k3 + k4) ; //yn+1 = yn +k
             x0 =  x0+ h ;         // Update x0 for the next iteration
          }
           return y ;
   }
int main()
{
     float  x0  , y0 , h ,x   ;
    printf("  enter  intial value of x (x0)");
    scanf("%f" , &x0);
  printf("  enter  intial value of y (y0)");
    scanf("%f" , &y0);
      printf("  enter  intial value of h");
    scanf("%f" , &h);
      printf("at which value  u want  to find out ");
    scanf("%f" , &x);
       float result = rungekutta(x0, y0, h, x);
    printf("\nThe value of y at x = %f is: %f\n", x, result);

     
    return 0;
}
