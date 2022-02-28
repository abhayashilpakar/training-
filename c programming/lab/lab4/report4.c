#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,c,d,e,count=0 ;
    printf("enter numbers");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a>0)
    {
        count++;
    }
    if(b>0)
    {
        count++;
    }
    if(c>0)
    {
        count++;
    }
    if(d>0)
    {
        count++;
    }
    if(e>0)
    {
        count++;
    }

    printf("Numbers of positive=%d",count);


    return 0;
}
