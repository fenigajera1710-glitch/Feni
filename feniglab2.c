#include<stdio.h>
 int main()
 {
     int a,b,c,smaller,greater;
     smaller = a;
     greater = b;

     if(a<b && a<c)
        smaller = a;

    else if (b<c)
        smaller = b;

    else
        smaller = c;
    printf("%d is smaller than %d\n",greater);
    printf("%d is greter than %d\n",smaller);

    return 0;
 }
