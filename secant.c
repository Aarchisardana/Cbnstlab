//  yah toh yeh krdegah converge vrnah nhi bhi krta hae not necesaary kie yeh kregah hie
//initial guesses 
// iteration
// tolerance 


#include<stdio.h>
#include<math.h>
float f(float x) {
    return x * x * x - 5 * x + 1; // Example function: f(x) = x^3 - 5x + 1
}
int main() {
    float a, b, c, error;
    // Input the initial guesses for the roots
    printf("Enter 1st root guess: ");
    scanf("%f", &a);
    printf("Enter 2nd root guess: ");
    scanf("%f", &b);
    printf("Enter tolerance: ");
    scanf("%f", &e);
    int i = 1;
            printf("Iteration\t\tc\tf(c)");
    do {
        // Regula Falsi formula to find the next approximation
        c = ((a * f(b)) - (b * f(a))) / (f(b) - f(a));
        // Update root estimates
        a = b;
        b = c;
        printf("\n%d\t\t  %.6f\t  %.6f",  i,c,f(c));
        i++; // Increase iteration count
    } while (fabs(f(c)) > error); // Stop when the function value is within the tolerance
    printf("\nFinal Root: %.6f\n", c);
    return 0;
}
