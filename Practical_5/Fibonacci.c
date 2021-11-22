#include<stdio.h>
//Function with arguments Fn−1 and Fn−2 and on exit they will have Fn and Fn−1.
void tranform(int *f1, int *f2)
{
    int fn = *f1 + *f2;
    *f1 = *f2;
    *f2 = fn;
}
//Function to print the values of the Fibonacci series
void solve(int n)
{
    int f1 = 0, f2 = 1;
    if(n >= 1)
        printf("%d ", f1);
    if(n >= 2)
        printf("%d ", f2);
    n -= 2;
    //loop to find the whole series upto n
    while(n > 0)
    {
        n--;
	tranform(&f1, &f2);
        printf("%d ", f2);
    }
}
//Main handler
int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}
