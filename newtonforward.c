 // y  ko input lete vaeh  [y][0] q ki uppr  mne flaoat [10][10] ase likah
#include <stdio.h>
void fdt(float x[] , float y[][10] , int n ){
    //row  j
 //   column i 
    for(int i=1; i<n ; i++){
         for(int j=0 ;j<n-i ; j++){
             y[j][i] = y[j+1][i-1] - y[j][i-1] ;
         }
    }
}
 int factorial(int n){
      int fact=1;
      for(int i=2; i<=n;i++){      // 2 sae krnah calcuate  0 and 1 pae 1 hie anna hae nah  
      // so no  need to calculate 
           fact=fact*i;
      }
       return fact;
     
 }
 float fdformula(float x[] , float y[][10] , float value, int n ) {
     float result = y[0][0];
     float h = x[1]-x[0];
     float u =  (value-x[0]) / h ;
     for(int i=1; i<n; i++){
        float  u_term=u ;
          for(int j=1; j<i ; j++){
              u_term*= (u-j);
          }
          result+=(u_term*y[0][i])/factorial(i)  ;
     }
      return result;
 }
int main()
{
     int n ;
     float x[10] , y[10][10] , value ;
   printf("enter the value of n total data points ");
scanf("%d" , &n);
printf("enter the value of x and  y\n");
for(int i=0; i<n; i++){
     printf("x[%d]:" ,i);
     scanf("%f" , &x[i]);
     printf("y[%d]:" ,i);
      scanf("%f" , &y[i][0]);
}
 printf("Enter the value to interpolate: "); 
    scanf("%f", &value);
    fdt(x,y,n);
     float result = fdformula(x, y, value, n);  // Interpolation result 
    printf("The interpolated value at %.2f is: %.5f\n", value, result); 
        printf("\nSubmitted by Aarchi , A-RQ, 2");
    return 0;
}
