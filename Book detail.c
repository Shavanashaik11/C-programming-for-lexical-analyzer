#include<stdio.h>
   
#include<conio.h>

#include<string.h>

#define SIZE 20

struct bookdetail

{

          char name[100];

          char author[100];

          char subject[100];

          int price;

};

void output(struct bookdetail v[],int n);

int main()

{

          struct bookdetail b[SIZE];

          int n,i;

          

          printf("Enter the Numbers of Books:");

          scanf("%d",&n);

          printf("\n");

          for(i=0;i<n;i++)

          {

                   printf("\t=:Book %d Detail:=\n",i+1);

                   printf("\nEnter the Book Name:\n");

                   scanf("%s",b[i].name);

                   printf("Enter the Author of Book:\n");

                   scanf("%s",b[i].author);

                   printf("Enter the Subject:\n");

                   scanf("%s",&b[i].subject);

                   printf("Enter the Book Id:\n");

                   scanf("%d",&b[i].price);

          }

          output(b,n);

          getch();

}

void output(struct bookdetail v[],int n)

{

          int i,t=1;

          for(i=0;i<n;i++,t++)

          {

                    printf("\n");

                   printf("Book No.%d\n",t);

                   printf("\t\tBook %d Name is=%s \n",t,v[i].name);

                   printf("\t\tBook %d Author is=%s \n",t,v[i].author);

                   printf("\t\tBook %d Subject is=%s \n",t,v[i].subject);

                   printf("\t\tBook %d ID is=%d \n",t,v[i].price);

                    printf("\n");

          }

}
