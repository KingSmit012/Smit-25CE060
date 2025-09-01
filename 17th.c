#include<stdio.h>
int main()
{
    int t;
    float d;
    for(t=1 , d=0.5 ; t<=20 && d<=10 ; t++ , d=d+0.5){
        printf("Minute %d: Distance covered = %.2f km\n",t,d);
    }
}
