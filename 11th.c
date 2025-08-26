#include<stdio.h>
int main()
{
    int n;
    printf("Tamara TAKA nakho :");
    scanf("%d", &n);


    if(n>=0 && n<=100){

        if(n>=90) printf("A - Grade");
        else if(n>=80 && n<90) printf("B - Grade");
        else if(n>=70 && n<80) printf("C - Grade");
        else if(n>=60 && n<70) printf("D - Grade");
        else if(n<60) printf("E - Grade");
        else printf("TAKA sacha nakho...!!");
    }
    else {
        printf("TAKA sacha nakho...!!");
    }
}
