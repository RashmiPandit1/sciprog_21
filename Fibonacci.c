
#include<stdio.h>
void tranform(int *f1, int *f2)
{
    int fn = *f1 + *f2;
    *f1 = *f2;
    *f2 = fn;
}

void solve(int n)
{
    int f1 = 0, f2 = 1;
    if(n >= 1)
        printf("%d ", f1);
    if(n >= 2)
        printf("%d ", f2);
    n -= 2;
    while(n > 0)
    {
        n--;
	tranform(&f1, &f2);
        printf("%d ", f2);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}


