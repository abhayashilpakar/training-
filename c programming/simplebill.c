#include<stdio.h>
#include<conio.h>
int main ()
{
    int num, qty;
    int momo = 100;
    int coffee = 50;
    int tea = 20;
    printf("Menu\n 1.momo \t 100\n 2.coffee \t 50\n 3.tea  \t 20\n ");
    printf("Enter the  number : ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("please enter  your  order : ");
            scanf("%d", &qty);
            printf("your  bill  is %d for %d plate  of momo", (qty*momo),qty);
            break;
        case 2:
            printf("please enter  your  order : ");
            scanf("%d", &qty);
            printf("your  bill  is %d for %d cup  of coffee", (qty*coffee),qty);
            break;
        case 3:
            printf("please enter  your  order : ");
            scanf("%d", &qty);
            printf("your  bill  is %d for %d cup of  tea ", (qty*tea),qty);
            break;
        default:
            printf("INVALID");
    }
    return 0;
}
