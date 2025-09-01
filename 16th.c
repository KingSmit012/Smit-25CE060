#include<stdio.h>
int main()
{
    int m=21,n,a;
    printf("Youre matchsticks is %d \n",m);
    for(int i=1 ; i<=m ; i++)
    {

        printf("Enter youre matchsticks(in b/w 1 to 4) : ");
        scanf("%d",&n);
        if(n>0 && n<=4)
        {
            a=5-n;
            printf("computer choose %d\n",a);
            m = m-(a+n);
            printf("Baki Rahel matchsticks: %d\n",m);

        }
        else printf("Invalid choice...!\n");

    }
}
