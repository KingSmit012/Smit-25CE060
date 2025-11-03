#include<stdio.h>
#include<math.h>

float CArea(float a , float b , float c)
{
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main()
{
    float  a,b,c;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter c:");
    scanf("%f",&c);

    if(((a+b)>c) && (b+c>a) && (c+a >b)){
        float area = CArea(a, b, c);
        printf("\nThe given sides form a valid triangle.\n");
        printf("Area of the triangle = %.2f square units\n", area);
    }
    else printf("\nThe given sides do not form a valid triangle.\n");
}
