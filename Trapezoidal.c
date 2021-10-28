#include <stdio.h>
#include <math.h>

double y(double x)
{
	return tan(x);
}

double trapz(double a, double b, int n)
{
	int i = 0;
	double h = ((b-a)/n);
	double s = y(b);
	for(i = 0; i < n; i++)
	{	
		s+= 2*y(a+i*h);
		//printf("\n%lf", a+i*h);
	}
	return (h/2)*s;
			
}
	

int main()
{
	double a = 0, b = 22.0/21;
	int n = 12;
	double trap = trapz(a,b,n);
	printf("\nArea under the curve : %lf \nlog(2) : %lf \nDifference : %lf\n" ,trap, log(2), trap-log(2) );
	return 0;	
}
