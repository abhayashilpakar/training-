#include<stdio.h>
#include<conio.h>
int main ()
{
    int num, qty;
    printf("1.food menu \n2.exit \n");
    printf("enter  the  number :");
    scanf("%d",&num);
    if(num==1)
    {
        int choose;
        printf("Menu Items  \n 1.coffee \n 2.momo \n 3.tea \n");
        printf("enter the  items :  ");
        scanf("%d",&choose);

        if(choose==1)
        {
            int choose_items;
            printf("Items list\t prices  \n 1.Black coffee\t 40 \n 2.milk coffee\t 50 \n");
            printf("choose your  item  : ");
            scanf("%d",&choose_items);

            if(choose_items==1)
            {
                int black = 40;
                printf("black  coffee\n please enter your  order : ");
                scanf("%d",&qty );
                printf("Your total  bill is Rs %d for %d cup coffee",(qty*black), qty);
            }
            else if (choose_items==2)
            {
                int milk = 50;
                printf("milk  coffee\n please enter your  order : ");
                scanf("%d",&qty );
                printf("Your total  bill is Rs %d for %d cup coffee",(qty*milk), qty);

            }

        }

        if(choose==2)
        {
            int choose_items;
            printf("Items list\t prices  \n 1.Fry momo\t 110 \n 2.buff momo\t 100 \n");
            printf("choose your  item  : ");
            scanf("%d",&choose_items);

            if(choose_items==1)
            {
                int  fry = 110;
                printf("fry momo\n please enter your  order : ");
                scanf("%d",&qty );
                printf("Your total  bill is Rs %d for %d plate momo",(qty*fry), qty);
            }
            else if (choose_items==2)
            {
                int buff = 100;
                printf("buff momo\n please enter your  order : ");
                scanf("%d",&qty );
                printf("Your total  bill is Rs %d for %d plate momo",(qty*buff), qty);

            }
        }

        if(choose==3)
        {
            int choose_items;
            printf("Items list\t prices  \n 1.Black tea\t 15 \n 2.milk tea\t 20 \n");
            printf("choose your  item  : ");
            scanf("%d",&choose_items);

            if(choose_items==1)
            {
                int black_tea= 15;
                printf("black  tea\n please enter your  order : ");
                scanf("%d",&qty );
                printf("Your total  bill is Rs %d for %d cup coffee",(qty*black_tea), qty);
            }
            else if (choose_items==2)
            {
                int milk_tea = 20;
                printf("milk  tea\n please enter your  order : ");
                scanf("%d",&qty );
                printf("Your total  bill is Rs %d for %d cup coffee",(qty*milk_tea), qty);

            }
        }
    }
    else{
        printf("Thank you for  coming  !!\n");
    }
    return 0;
}
