#include<stdio.h>
int main()
{
    int n;
    printf("Enter : ");
    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++){
            if(i==1) printf("%d",j);
            else if(i==j) printf("%d",j);
            else printf(" ");
        }
        for(int j=n+1 ; j<=n+n-1 ; j++){
            if(i==1) printf("%d",j);
            else if((i+j)==(n*2)) printf("%d",j);
            else printf(" ");
        }

        printf("\n");
    }
}
