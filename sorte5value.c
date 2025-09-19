
#include<stdio.h>

int main()
{

    int arr[5],i;

    printf("enter 5 values : \n");
    for(i = 0;i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("you entered : \n");
    for(i = 0;i < 5; i++)
    {

        scanf("%d",arr[i]);
    }

    return 0;
}
