// lgarange 
 // ek voh x vali mistake hoghi thi glti sae 
//  ans  sahi jgh print kroh  ater for ke j loop
 //num and den  valeh  code kae time sari vaalue x kie hae kinldy cross verify value put krke  
//badd mae last mae ans mae hae bs y  to multiply 



#include <stdio.h>
    int main() {
    int n, X;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    
    float x[n+1] , y[n+1] ,ans =0 ;
       printf("Enter the elements of X and their corresponding Y:\n");
    for(int i=0; i<n; i++){
        scanf("%f %f" , &x[i] , &y[i]);
    }
     printf("Enter the  value at which u want to find: ");
    scanf("%d", &X);
      for(int i=0; i<n; i++){
         float num= 1,  den =1 ;
         for(int j=0; j<n; j++){
            if(i!=j){
                num = num*(X-x[j]);
                den = den*(x[i]-x[j]);
            }
         }
         ans = ans + (num/den)*y[i];
      }
      printf(" so ans is %f " , ans);

    return 0;
}
