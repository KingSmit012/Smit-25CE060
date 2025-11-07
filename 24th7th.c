#include<stdio.h>

int main()
{
    char W[100];
    printf("Enter : ");
    scanf("%s", &W);

    for(int i=0 ; W[i]!= NULL ; i++){
        if(W[i]>= 'a' && W[i]<= 'z'){
            W[i] = W[i] - 32;
        }
    }
    printf("Reverce : %s",W);
}

