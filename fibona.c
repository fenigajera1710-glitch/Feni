#include<stdio.h>
int main()
{int n;
 printf("enter n:");
 scanf("%d",&n);
  int fact(int n);
  printf("factorial of %d is:%d",n,fibo(n));
}
int fibo(int n){
if(n == 1){
    return 1;

} if(n==2){
return 1;}
else
 return (fibo(n-1)+fibo(n-2));
}
