#include<stdio.h>
int main()
{
	int sal,tax;
	printf("Enter Salary:");
	scanf("%d",&sal);
	if(sal>0 && sal<=150000)
	{
		printf("No Tax");
	}
	else if(sal>150000 && sal<=300000)
	{
		tax=sal*10/100;
		printf("%d",tax);
	}
	else if(sal>300000 && sal<=500000)
	{
		tax=sal*20/100;
		printf("%d",tax);
	}
	else if(sal>500000)
	{
		tax=sal*30/100;
		printf("%d",tax);
	}
	else if(sal<=0)
	{
		printf("enter a valid input");
	}
	else
	{
		printf("enter a valid input");
	}
}
