/*********************************************************************************************
 *
 * GCD (Greatest Common Divisor) of two numbers is the largest number that divides both of them.
 * Intution :
 * * If we subtract a smaller number from a larger (we reduce a larger number),
 * GCD doesn’t change. So if we keep subtracting repeatedly the larger of two,
 * we end up with GCD.
 *
 * * Now instead of subtraction, if we divide the smaller number,
 * the algorithm stops when we find remainder 0.
 *
 * **********************************************************************************************/

// Header Files needed
#include<stdio.h>   // Handling IO(scanf, printf) operations
#include<math.h>    // Handling power() function
#include<stdlib.h>  // Handling malloc() function

// GCD Iterative function calculates the highest common factor among 2 passed arguments
int GCD(int a, int b)
{
	int temp;
        while(b)
        {
               temp = b;
               b = a % b;
               a = temp;
        }
        return a;
}
//GCD Recursive function calculates the highest common factor among 2 passed arguments
int GCD_recursive(int a, int b)
{
        if(!b)
		return a;
        return GCD_recursive(b, a % b);
}
//Main handler
int main()
{
        int a = 8, b = 12;
	printf("Iterative GCD : %d\n", GCD(a, b));
        printf("Recursive GCD : %d\n", GCD_recursive(a, b));
// Returning the Main handler, indicating end of the code
	return 0;
}

