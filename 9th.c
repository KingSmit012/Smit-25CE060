#include<stdio.h>
int main()
{
    float p,d1,d2,dp;
    printf("Enter Total Amount: ");
    scanf("%f",&p);

    printf("\nYoure Amount is %.2f\n\n",p);
    if(p<1000){
        printf("No Discount is Applied\n\n");
    }
    else if(p>=1000 && p<=5000)
    {
        d1=p-(p*0.10);
        printf("Youre Discount is(%%10)= %.2f\n\n",p*0.10);
        printf("Youre Discountble Amount is : %.2f \n\n",d1);
    }
    else if(p>5000)
    {
        d2=p-(p*0.20);
        printf("Youre Discount is(%%20)= %.2f\n\n",p*0.20);
        printf("Youre Discountble Amount is : %.2f \n\n",d2);
    }
}
