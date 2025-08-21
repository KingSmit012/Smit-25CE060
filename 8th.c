#include<stdio.h>
int main()
{
    int n;
    printf("Enter a age : ");
    scanf("%d",&n);

    if(n>0){
        if(n>=18){
            printf("Youre IN...!!");
        }
        else{
            printf("Youre OUT...!!");
        }
    }
    else{
        printf("invalid age is founded (ERROR 404)");
    }
}
