#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,array[10],count=0;
    printf("enter  numbers");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
        if(array[i]>0)
        {
            count++;
        }
    }
    printf("the positive number is %d",count);
    return 0;
}
