#include <stdio.h>
#include <math.h>
#define pi 22.0/7
double y(double x)
{
	return tan(x);
}
double rad(double d)
{
	return (d*22.0)/(180.0*7);
}
double trapz(int n)
{
	double a = 0, b = 60;
	int i = 0;
	double h = ((b-a)/n);
	double s = y(rad(b));
	for(i = 0; i < n; i++)
	{	
		double j = rad(a+i*h);
		//printf("\n%lf", j);
		s+= 2*y(j);
	}
	return (rad(h)/2)*s;			
}
	

int main()
{
	//double a = 0, b = 60;
	int n = 12;
	double trap = trapz(n);
	printf("\nArea under the curve : %lf\n" ,trap);
	return 0;	
}
