#include<stdio.h>
int main()
{
    int b , w , A=0 ;
    b=5000;
    printf("Youre Balance is %d\n", b);

    while(1){
        printf("Enter amount to withdraw : ");
        scanf("%d",&w);

        if(b>=w && w>0){
            printf("Youre withdraw amount is %d\n",w);
            printf("Youre Balance is %d\n",b= b-w);

            if(b==0){
                printf("You can't do that\n");
                break;
            }
        }
        else printf("Insufficient balance.\n");
        }
}
