#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int i,n,c=0,num,reverse_num=0,remainder,temp;
	printf("Enter the string or integer:");
	{
		scanf("%d",&num);
		temp=num;
		while(temp!=0)
		{
			remainder=temp%10;
			reverse_num=reverse_num*10+remainder;
			temp/=10;
		}
	}
	gets(s);
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		if(s[i]==s[n-i-1])
		c++;
	}
	if(c==i)
	    printf("Plindrom");
	else
	    printf("Not a Palindrom");
	return 0;
}
