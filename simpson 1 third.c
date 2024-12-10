simpsons one third 


#include <stdio.h>
#include <math.h>
float f(float x)             //function f(x) whose integral is to be calculated
{
    return 1 / (1 + x * x);;
} 

int main(){
   float lower, upper,integration=0.0 , h , result ;
   int i, n;  

   printf("Enter lower and upper limit of integration: ");
   scanf("%f %f",&lower,&upper);
   printf("Enter number of sub intervals: ");
   scanf("%d", &n);
   h = (upper-lower)/n;
   integration = f(lower) + f(upper);
    
    for(int i =1 ; i<n ; i++){ 
         if(i%2==0){
              integration =  integration+ 2*f(lower+ h*i);                   //  point to be remember 
         }
          else{
               integration =  integration+ 4*f(lower+ h*i);
          }
    }
            result =  (integration*h)/3 ;
   printf("\nRequired value of integration is: %f", result);
   return 0;
    }
    
    // ans is  same 

#include <stdio.h>

int main() {
    int n; 
    float result = 0.0;

    printf("Enter the number of subintervals: ");
    scanf("%d", &n);

    float x[n + 1], y[n + 1];  // Arrays to store x values and corresponding y (f(x)) values
    float integration, h;

    printf("Enter the x values and corresponding function values (y = f(x)):\n");
    for (int i = 0; i <= n; i++) {
        printf("x[%d]: ", i);
        scanf("%f", &x[i]);
        printf("y[%d]: ", i);
        scanf("%f", &y[i]);
    }

    h = (x[n] - x[0]) / n;
    integration = y[0] + y[n];  // Add the boundary values

    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            integration += 2 * y[i];  // Even indices: multiply by 2
        } else {
            integration += 4 * y[i];  // Odd indices: multiply by 4
        }
    }

    result = (h / 3) * integration;
    printf("Required value of integration is: %f\n", result);

    return 0;
}











  approach  when table  will bw given just take input  the vlaues  x and y 


