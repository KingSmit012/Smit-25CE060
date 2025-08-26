#include<stdio.h>
int main()
{
    for(int i=1 ; i<=50 ; i++){
        if(i%5==0){
            printf ("Book ID: %d (Special Edition)\n",i);
        }
        else printf ("Book ID: %d\n",i);
    }
}
