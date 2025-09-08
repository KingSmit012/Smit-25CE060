#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter Row : ");
    scanf("%d",&x);
    printf("Enter Column : ");
    scanf("%d",&y);

    for(int i=1 ; i<=x ; i++){
        for(int j=1 ; j<=y ; j++){
            printf("%d  ",i*j);
        }
        printf("\n");
    }
}