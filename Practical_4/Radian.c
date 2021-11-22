#include<stdio.h>
#include<math.h>

//Globally defining the array
double tanx[20];
//Function to compute the tan of x(0 to pi/3)
double compute_tan(double x)
{
    return tan(x);
}
//Function to convert degrees to radians
double deg_to_rad(int n)
{
    return ((double)n * 22.0)/(180.0 * 7.0);
}
//Function that calculates the area under the curve of tan(x) from 0 → 60 degrees using the Trapezoidal Rule.
double area(int n)
{
    int i = 0;
    double s = 0;
    double a = 0, b = M_PI/3;
    for(i = 0; i <= n; i++)
    {
        if(i == 0 || i == n)
            s += tanx[i];
        else
            s += 2 * tanx[i];
    }
    s = (s * (b - a))/(2.0 * n);
    return s;
}
//Main Handler
int main()
{
    int n = 12, i = 0;
    int j = 0;
    double rad;
    //Loop to generate the degree angles and the radian values
    for(i = 0; i <= 60; i += 5)
    {
        rad = deg_to_rad(i);
        tanx[j++] = compute_tan(rad);
    }
    //Loop to print the different values of tan(X) when the value of x is in degrees from 0 to 60 with 5 intervals.
    for(i = 0; i <= 12; i++)
        printf("tan(%d) = %lf\n", i*5, tanx[i]);
    double ans = area(n);
    printf("Area = %.10lf, Log(2) = %.10lf, Difference = %.10lf\n", ans, log(2), fabs(ans - log(2)));

    return 0;
}
 
