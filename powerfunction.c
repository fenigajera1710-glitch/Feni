#include<stdio.h>

int pow(int a,int b);
int main(){

    int a, b,c;
    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);

    c = pow(a,b);
    printf("%d raised to %d is :%d",a,b,c);

    return 0;

}

int pow(int a,int b){
    int result = 1;
    for(int i = 1;i <= b; i++){
        result *= a;
    }
    return result;


    
}