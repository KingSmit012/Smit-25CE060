#include<stdio.h>

void main()
{
    int n;
    float *p, *t , *q;

    scanf("%d",&n);
    p = (float *) calloc(n,sizeof(float));
    t=p;
    for(int i=1 ; i<= n ; i++ , p++){
        scanf("%d", p);
    }
    p=t ;
    for(int i=0 ; i< n ; i++ , p++){
        for(int j=i+1 , q=p+1 ; j<= n ; q++ , j++){
            if(*p > *q){
                *p= *p + *q;
                *q= *p - *q;
                *p= *p - *q;
            }
            for(int=1 ; i<=n ; i++,t++){
                printf("%f",*t);
            }
                free(t);
        }

    }
}
