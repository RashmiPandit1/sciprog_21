#include<stdio.h>
#include<math.h>
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
    while(fabs(el) >= delta);
    return sum;
}
double artanh2(double x)
{
    double sum2 = (log(1+x)-log(1-x))/2.0;
    return sum2;
}
int main()
{
    double i;
    double n = 0;
    printf("Enter the value of delta : ");
    scanf("%lf", &n);
    double arr1[181], arr2[181];
    int c = 0;
    for(i = -0.9; i <= 0.9; i += 0.01)
    {
        arr1[c] = artanh1(i,n);
        arr2[c] = artanh2(i);
        c++;
    }
    int j = 0;
    for(j = 0; j < 180; j++)
        printf("The Difference between arctan1 and arctan2 = %.10lf \n", fabs(arr1[j] - arr2[j]));
    return 0;
}
