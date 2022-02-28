#include<stdio.h>
#include<conio.h>
int main ()
{
    int n , num, result;
    printf("table of  : ");
    scanf("%d",&num);
    for(n=1 ; n<=10 ; n++)
    {
        result = num * n;
        printf("%d * %d =%d\n",num, n, result);
    }
    return 0;
}
