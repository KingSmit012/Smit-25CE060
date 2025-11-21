#include<stdio.h>
#include<time.h>
#define p printf
#define s scanf
int i=0,id[100],daylate,ID,count;
char tital[100][50];
char status[100],ch;
time_t t;
struct tm issue;
struct tm current;
struct tm returnDate;
void insertbooks();
void displaybooks();
int gettotalbooks();
void borrowbooks();
void returnbooks();
float calculatefine(int daylate);
void main()
{

    int n;
    do
    {
        p("\n\nEnter number according given information.");
        p("\n1-Insert book's information.");
        p("\n2-Display books.");
        p("\n3-Borrow books.");
        p("\n4-Return books.");
        s("%d",&n);
        switch(n)
        {
            case 1:
                insertbooks();
                break;
            case 2:
                displaybooks();
                break;
            case 3:
                borrowbook();
                break;
            case 4:
                returnbooks();
                break;
        }
        p("\nEnter n to stop otherwise Enter y.");
        s("%s",&ch);

    }while(ch=='y');
}
void insertbooks()
{

    do
    {
        p("Enter book id :");
        s("%d",&id[i]);
        p("Enter book title :");
        s("%s",&tital[i]);
        p("Enter book status :");
        s("%s",&status[i]);
        p("\nif you want to Enter details then Enter y otherwise Enter n.");
        s("%s",&ch);
        i++;
    }while(ch=='y');
}
void displaybooks()
{
    int n;
    n=i;
    for(i=0,count=0 ; i<n ; i++ )
    {
        p("%3d %-50s %c\n",id[i],tital[i],status[i]);
        count++;
    }
    gettotalbooks();
}
int gettotalbooks()
{
    p("\ntotal books:");
    p("%d",count);
}
void borrowbook()
{
    int n;
    p("\nEnter book id which you want to issue:");
    s("%d",&ID);
    n=i;
    do
    {
        for(i=0 ;i<n ; i++)
        {
            if(id[i]==ID)
            {
                if(status[i]=='a')
                {
                    p("book is available.\n");
                    status[i]='n';
                    t = time(NULL);         // Set current time
                    issue = *localtime(&t);
                    returnDate = issue;

                    returnDate.tm_mday += 14;
                    mktime(&returnDate);

                    p("Issue Date  : %02d-%02d-%04d\n",
                    issue.tm_mday, issue.tm_mon + 1, issue.tm_year + 1900);

                    p("Return Date : %02d-%02d-%04d\n",
                    returnDate.tm_mday, returnDate.tm_mon + 1, returnDate.tm_year + 1900);



                }
                else
                {
                    p("book is not available.\n");
                }
            }
        }





        p("\nif you want to borrow another book Enter y otherwise Enter n. ");
        s("%s",&ch);
    }while(ch=='y');
}

void returnbooks()
{
    int Id,n,i;
    float a;

    do
    {
        p("Enter book id which you want to return:");
        s("%d",&Id);
        for(i=0 ; i<n ; i++)
        {
            if(id[i]==Id)
            {
                status[i]='a';
                p("how many days late you return book:");
                s("%d",&daylate);

                a=calculatefine(daylate);
                p("your fine:%f\n",a);
                p("book return successfully.");
                break;
            }

        }
        p("if you want to return another book then Enter y otherwise n.");
        s("%s",&ch);
    }while(ch=='y');

}
float calculatefine(int daylate)
{
    if(daylate==0)
    {
        return 0.0;
    }
    else
    {
        return 50.0;
    }
}
