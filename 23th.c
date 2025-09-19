#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of Days: ");
    scanf("%d",&n);
    int mp=0;
    int p;

    int A[n];

    for(int i=0 ; i<n ; i++){
        printf("Enter %d day : ",i+1);
        scanf("%d",&A[i]);
        p= [i] - [i-1];
    }
    printf("%d ",A);

}
