/************************************************************
 *
 * Euler's Number 'e' is given by :
 * f(x) = x^0/0! + x^1/1! + x^2/2! + x^3/3! + x^4/4! +··· = e^x
 *
 * *************************************************************/
// Header Files needed
#include<stdio.h>   // Handling IO(scanf, printf) operations
#include<math.h>    // Handling power() function
#include<stdlib.h>  // Handling malloc() function

// Calculates Factorial of a given number 'n'
long long fact(int n)
{
	long long fact = 1;
	while(n > 0)
		fact *= n--;
	return fact;
}
// Calculate the Approximate Value of Euler's number 'e' for polynomial order 'n'
double calculate(double x, int n)
{
// This terms pointer will hold the base address of the block created
	double *terms;
//Dynamically allocate memory using malloc()
        terms = (double*)malloc((n+1) * sizeof(double));
        int i = 0;
// Storing the the term for each power of x separately.
	for(i = 0; i <= n; i++)
		terms[i] = (double)pow(x, i)/fact(i);
// Calculating the approximate value by adding all the terms
         double ans = 0;
	 for(i = 0; i <= n; i++)
		ans += terms[i];
// Returning value
         return ans;
}
// Main handler
int main()
{
	int n, i;
        printf("Enter the order of the polynomial : ");
	scanf("%d", &n);
        double x = 1.0, original_e = 2.71828;
        for(i = 1; i <= n; i++){
		double temp = calculate(x, i);
		printf("For order %i, Value = %lf, Difference = %lf\n", i, temp, fabs(original_e - temp));                                                                                                               
	}
	return 0;   
}

