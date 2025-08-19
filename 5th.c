#include<stdio.h>
 int main()
 {
     double tp;
     tp=1441981744;
     printf("Total Population is : %.2lf\n",tp);
     double tw;
     tw=tp*0.484;
     printf("Total Women is : %.2lf\n",tw);
     double tm;
     tm=tp-tw;
     printf("Total Men is : %.2lf\n",tm);
     double tlp;
     tlp=tp*0.8595;
     printf("Total Literate Population is : %.2lf\n",tlp);
     double tlm;
     tlm=tm*0.8095;
     printf("Total Literate Men is : %.2lf\n",tlm);
     double tlw;
     tlw=tw*0.6284;
     printf("Total Literate Women is : %.2lf\n",tlw);
     double tulm;
     tulm=tm-tlm;
     printf("Total illiterate Women is : %.2lf\n",tulm);
     double tulw;
     tulw=tw-tlw;
     printf("Total illiterate Women is : %.2lf\n",tulw);
 }
