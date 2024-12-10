// read important pointers  nichae 
#include<stdio.h>
#include<math.h>                  // this is math.h  not maths .h 
 float f (float x){
     return 1/(1+x*x) ;
 }
  int  main(){
       float lower, upper , stepsize , integration = 0.0 , k  ;
        int subinterval , i  ;
    printf("Enter lower limit of integration: ");
    scanf("%f", &lower);
    printf("Enter upper limit of integration: ");
    scanf("%f", &upper);
    printf("Enter number of sub intervals: ");
    scanf("%d", &subinterval);
    
     stepsize= (upper - lower)/subinterval ;
     integration = f(lower) + f(upper) ;

     // logic part  good one 

      for(int i=1;  i<subinterval; i++){
         k= lower + (stepsize*i);          // most imp line ever 
        integration =  integration + 2 *f(k);
        printf("%f \n",  integration);
      }
       integration =  integration * (stepsize/2) ;
        printf(" so answer is %f" , integration);
         return 0 ;
  }

//comments 
and is 0.784241  kinldy check by putting this to verify
 for using pow(x,3) 








 when table is given 

#include <stdio.h>
int main()
{
    int n     ;  // n= nsubinterval 
 printf(" enter  the value of n ");
 scanf("%d" , &n);
 float x[n+1] , y[n+1]  , h ,  integration , k , result;
 for(int i =0; i<=n ; i++){
    printf("x[%d]:" ,i );
    scanf("%f" ,&x[i]);
    printf("f(x[%d]):" ,i );
    scanf("%f" ,&y[i]);
 }
   h = (x[n] - x[0]) / n ;
    integration =  y[0]  + y[n] ;
 for(int i = 1; i <n; i++) {
      k =  x[0] + h*i ;
      integration =  integration + 2*y[i] ;
 }
  result  =  ( integration * h) /2 ;
  printf("   so final  integration is %f" , result);
 return 0;
}
