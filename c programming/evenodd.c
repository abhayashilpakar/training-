#include<stdio.h>
#include<conio.h>
int main ()
{
    int n ;
    printf("Enter the  number : ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("You  Enter  Zero");
    }
    else if(n%2==0)
    {
        printf("it is  even  number");
    }
    else
    {
        printf("it is  odd number");
    }
    return 0;
}
