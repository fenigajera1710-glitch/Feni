#include<stdio.h>

int main()
{
     int Rs,dollars;

     printf("Enter amount in Rs:");
     scanf("%d",&Rs);

     dollars = Rs/48;

     printf("%d Rs = %d dollars\n",Rs,dollars);

     return 0;
}
