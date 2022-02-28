#include<stdio.h>
#include<conio.h>
int main ()
{
    int n;
    printf("enter the  number : ");
    scanf("%d",&n);
    if(n%5!=0)
    {
        printf("it is  not  required number");
    }
    else if (n%3==0 && n%5==0)
    {
        printf("it is  divisible ");
    }

    else if ( n%3==0)
    {
        printf("divisible by  both ");
    }
    else
    {
        printf("it is  not  divisible ");
    }

    return 0;
}
