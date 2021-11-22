#include<stdio.h>
#include<math.h>
//Function to calculate the hyperbolic arc tangent by using Maclaurin series
double artanh1(double x, double delta)
{
    double sum = 0, el = 0;
    double s = 0;
    int i = 0, n = 0;
    do
    {
        s = 2*n + 1;
        el = (pow(x,s))/s;
        sum += el;
        n++;
    }
    //Function will stop if the element in the series is smaller than a given precision, delta
    while(fabs(el) >= delta);
    return sum;
}
//Function to calculate the hyperbolic arc tangent by using natural logarithms
double artanh2(double x)
{
    double sum2 = (log(1+x)-log(1-x))/2.0;
    return sum2;
}
//Main handler
int main()
{
    double i;
    double n = 0;
    //Asks the user to enter a real positive number delta
    printf("Enter the value of delta : ");
    scanf("%lf", &n);
    double arr1[181], arr2[181];
    int c = 0;
    //Loop for calculating arctanh(x) where x ∈ [−0.9,0.9] and sampled every 0.01, using both functions
    for(i = -0.9; i <= 0.9; i += 0.01)
    {
        arr1[c] = artanh1(i,n);
        arr2[c] = artanh2(i);
        c++;
    }
    int j = 0;
    //Comparison between the two methods to upto 10 significant figures.
    for(j = 0; j < 180; j++)
        printf("The Difference between arctan1 and arctan2 = %.10lf \n", fabs(arr1[j] - arr2[j]));
    return 0;
}
