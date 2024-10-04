#include <stdio.h> 
void backwardDifferenceTable(float x[], float y[][10], int n) { 
    for (int i = 1; i < n; i++) { 
        for (int j = n - 1; j >= i; j--) { 
            y[j][i] = y[j][i - 1] - y[j - 1][i - 1]; 
        } 
    } 
} 
int factorial(int n) {  // Function to calculate factorial 
    int fact = 1; 
    for (int i = 2; i <= n; i++) { 
        fact *= i; 
    } 
    return fact; 
} 
float newtonBackward(float x[], float y[][10], float value, int n) { 
    float result = y[n - 1][0];  // Initialize result with yn 
    float h = x[1] - x[0];   // Calculate the interval (step size) 
    float u = (value - x[n - 1]) / h;  // Calculate u 
    for (int i = 1; i < n; i++) {  //  interpolation result using backward differences 
        float u_term = u; 
        for (int j = 1; j < i; j++) { 
            u_term *= (u + j);  // Compute u*(u+1)*(u+2)... for each term 
        } 
        result += (u_term * y[n - 1 - i][i]) / factorial(i); 
    }   
    return result; 
 } 
 int main() { 
    int n; 
    float x[10], y[10][10], value; 
    printf("Enter the number of data points: "); 
    scanf("%d", &n); 
    printf("Enter the x and y values:\n"); // Input the x and y values 
    for (int i = 0; i < n; i++) { 
        printf("x[%d]: ", i); 
        scanf("%f", &x[i]); 
        printf("y[%d]: ", i); 
        scanf("%f", &y[i][0]); 
    } 
    printf("Enter the value to interpolate: "); 
    scanf("%f", &value);  
    backwardDifferenceTable(x, y, n);    // backward difference table 
    float result = newtonBackward(x, y, value, n);    // interpolation result 
    printf("The interpolated value at %.2f is: %.5f\n", value, result); 
    return 0; 
} 
