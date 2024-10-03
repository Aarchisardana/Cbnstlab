// regular falsi method or false position method 
//  the iteration will be given till where up to we have to go like till
// 4 iteration
// joh negative ara hae c kae formula mae rkhneh kae badh mujeh usko a sae replace krnah hae c kie value ko 
//  hie krnah a sae replace 
//  a=    b = 
// f(a)    f(b)
// c =  a*f(b) - b*f(b)  / f(b)-f(a)
// precison bhi check krteh hae isme  hae  imp 
 //  float  ki e abb jo bhi koi  value  loghae anh always dhayn rhao agr 4 tak leni hae toh %.4f likhanh hae  okay
 // and for space \t\t lgane kae badd space doghe toh voh bhi count hota hae  be aware 


//code
#include<stdio.h>
#include<math.h>
 float f(float x){
     return x*x*x -2*x -5;
 }
int  main(){
    float a,b,c;
    int i=1 , maxiteration;
      printf(" value of a  guess ");
      scanf("%f" , &a);
       printf(" value of a  guess ");
      scanf("%f" , &b);
       printf(" value of a maximumteration ");
      scanf("%d" , &maxiteration);
      if(f(a)*f(b)>0){
         printf("Invalid interval, no root found in the given range.\n");
        return 1;       // important
      }
      printf("itertaion\ta\tb\tc\tf(c)\n");
      do{
          c= (a*f(b)-b*f(a))/(f(b)-f(a)) ;
        printf("%d\t\t%.4f\t%.4f\t%.4f\t%.4f\n"  , i,a , b ,c ,f(c));
     
          if(fabs(f(c)) <0.0001){
              break;
          }
          if(f(a)*f(c)<0){
              b=c;
          }
          else{
              a=c;
          }
        i++;
      }while(i<=maxiteration);
      printf(" so the final root is %.4f",c);
      return 0;
}
