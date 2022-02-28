#include<stdio.h>
#include<conio.h>
int main ()
{
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("the cude of %d is  %d\n", n, n*n*n);
        printf("the  square of %d is %d\n", n, n*n);
    }
    else{
        printf("the cude of  %d is  %d",n, n*n*n);
    }
    return 0;
}
