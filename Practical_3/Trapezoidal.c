#include <stdio.h>
#include <math.h>

double y(double x)
{
	return tan(x);
}
//function to return the calculation for the Trapezoidal rule
double trapz(double a, double b, int n)
{
	int i = 0;
	double h = ((b-a)/n);
	double s = y(a) + y(b);
	//loop that generates 11 equidistant points between 0→π/3 and adding 2tan(xi)for the each of the 11 points.
	for(i = 1; i < n; i++)
	{
		s+= 2*y(a+i*h);
		//printf("\n%lf", a+i*h);
	}
	return (h/2)*s;
}


int main()
{
	double a = 0; //, b = 22.0/21;
	double b = M_PI/3;
	int n = 12;
	double trap = trapz(a,b,n);
	// the integral of f(x) = tan(x)from 0→π/3 compared with the actual result:(π/3 - 0)tan(x)dx=log(2)
	printf("\nArea under the curve : %lf \nlog(2) : %lf \nDifference : %lf\n" ,trap, log(2), trap-log(2) );
	return 0;
}
