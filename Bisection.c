 //bisection code 
// remember the fabs function  used in c 
// have used do while loop  isme while kae end  mae semicolon use hogha dont forget
//math.h hae nah kie maths.h
//if<0 then x1=x2 dont get confused
//>0  hie use krnah  rather than >=0   error derah  hae 

#include <stdio.h>
#include<stdlib.h>
#include <math.h>

float f(float x){
    return x*x*x-2*x-5 ;
}
int main()
{
    float x0, x1, x2 , error;
     int i=1;
    printf("enter the guess value of x0 ");
    scanf("%f" , &x0);
    printf("enter the guess value of x1 ");
    scanf("%f" , &x1);
     printf("enter the error value ");
    scanf("%f" , &error); 
     if(f(x0)*f(x1) >0){
            printf(" no the guess value u have entered does not satisfy the given equation");
            return 1;
        }
    printf("\nstep\t\tx0\t\tx1\t\tx2\n");
    do{  
        x2 = (x0+x1)/2;
        
         printf("%d\t\t%f\t%f\t%f\n" ,i,x0,x1,x2);

         if(f(x2)*f(x0)<0){
            x1=x2;
        }
        else{
            x0=x2;
        }
        i++;
    }while(fabs(x1-x0)>error);
        printf("Approx. root is %f\n", x2);  
    return 0;
}

