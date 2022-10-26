#include<stdio.h>
int main()
{
    int y;
    printf("\n Enter a no. as year-");
    scanf("%d",&y);
    if(y%100==0)
    {
        if(y%400==0)
        {
            printf("%d is leap year",y);
        }
        else
        {
            printf("%d is not leap year",y);
        }
    }
    else
    {
         if(y%4==0)
        {
            printf("%d is leap year",y);
        }
        else
        {
            printf("%d is not leap year",y);
        }
    }
    return 0;
}