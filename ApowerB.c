#include<stdio.h>
#include<math.h>
int power(int a,int b);
int main(){
    int a,b,result;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
result = power(a,b);
printf("%d rest to %d is %d",a,b,result);
return 0;
}
int  power(int a,int b){
    if(b==0){
        return 1;
    }
    else {
        return a * power(a,b-1);
    }
}