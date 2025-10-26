#include<stdio.h>
int fib(int n);
int main()
{
    printf("%d",fib(10));
    return 0;
}

int fib(int n){
if(n == 0)
{
    return 0;
}
if(n == 1)
{
    return 1;
}


    int nm2 = fib(n-2);
    int nm1 = fib(n-1);
    int nn = nm2 +  nm1;
    return nn;
}