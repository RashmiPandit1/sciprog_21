#include<stdio.h>
#include<math.h>

double eachelement(double x,int n)
{
	double i = pow(x,2*n+1)/(2*n+1);		
	return i;	
}
double artanh1(double x,double delta)
{
	int n = 0;
	double r,s = 0;
	do
	{
		r = eachelement(x,n);
		s+= r;
		n++;		
	}
	while(fabs(r) >= delta);
	return s;
}
double artanh2(double x)
{
	return 0.5*(log(1+x)-log(1-x));	
}
void solve(double delta)
{
	double i = 0.9;
	for(i = -0.9;i <= 0.91; i+=0.01)
	{
		double x = artanh1(i,delta);
		double y = artanh2(i);
		printf("The difference between tan1h(%lf) and tan2h(%lf) =  %.10lf\n",i,i,fabs(x-y));
	}		
}

int main()
{
	double delta;
	printf("Enter the value of Delta : ");
	scanf("%lf",&delta);
	solve(delta);
	//double ans = artanh1(delta);
	//printf("/n%lf", ans);
	return 0;
}
