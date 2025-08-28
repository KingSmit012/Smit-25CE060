#include<stdio.h>
int main()
{
    int i;
    printf("Set a starting number of Seconds : ");
    scanf("%d",&i);

    while(i>0){
        printf("Timer is : %d\n",i);
        i--;
    }
     printf("Countdown completed...!");
}
