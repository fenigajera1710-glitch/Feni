#include<stdio.h>
int main()
{int n;
 printf("enter n:");
 scanf("%d",&n);
  int fact(int n);
  printf("factorial of %d is:%d",n,n*fact(n-1));
}
int fact(int n){
if(n == 1){
    return 1;
}else
 return (n*fact(n-1));
}
