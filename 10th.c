#include<stdio.h>
int main()
{
    int i,q,a;
    printf("1.Burger-150/-\n");
    printf("2.Pizza-200/-\n");
    printf("3.Pasta-120/-\n");
    printf("4.Sandwich-100/-\n");
    printf("5.French Fries-80/-\n");
    printf("Enter \nYoure order: ");
    scanf("%d",&i);

    while(1)
    {
        switch(i)
        {
            case 1:
            printf("\n\nYoure Selected Burger\n");
            printf("Ketla Burger Khasho.. : ");
            scanf("%d",&q);
            a=q*150;
            printf("\n\nTamaro Total : %d",a);
            break;

            case 2:
            printf("\nYoure Selected Pizza\n");
            printf("Ketla Pizza Khasho.. : ");
            scanf("%d",&q);
            a=q*200;
            printf("\nTamaro Total : %d",a);
            break;

            case 3:
            printf("\nYoure Selected Pasta\n");
            printf("Ketla Pasta Khasho.. : ");
            scanf("%d",&q);
            a=q*120;
            printf("\nTamaro Total : %d",a);
            break;

            case 4:
            printf("\nYoure Selected Sandwich\n");
            printf("Ketla Sandwich Khasho.. : ");
            scanf("%d",&q);
            a=q*100;
            printf("\nTamaro Total : %d",a);
            break;

            case 5:
            printf("\nYoure Selected Fries\n");
            printf("Ketli Fries Khasho.. : ");
            scanf("%d",&q);
            a=q*80;
            printf("\nTamaro Total : %d\n",a);
            break;

            default:
            printf("You enter invalid choice...!!(ERROR 404\n");
        }
    }

    return 0;
}
