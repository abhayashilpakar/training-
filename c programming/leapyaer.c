#include<stdio.h>
#include<conio.h>
int main ()
{
    int n;
    printf("enter  the  year :");
    scanf("%d",&n);
    if(n%100!=0)
    {
        if(n%400==0 || n%4==0)
        {
            printf("it is a leap  year");
        }
        else
        {
            printf("every  year is not leap year");
        }
    }
    else
    {
        printf("it  is  not  leap year");
    }


    return 0;
}
