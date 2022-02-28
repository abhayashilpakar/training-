#include<stdio.h>
#include<conio.h>

int sumAdd(int a, int b)
{
    return a + b;
}


int main()
{
    int i, a[50];

    for(i=0;i<2;i++)
    {
        printf("enter the number : ");
        scanf("%d",&a[i]);

    }
    printf("the sum is %d",sumAdd(a[1],a[0]));

    return 0;
}


