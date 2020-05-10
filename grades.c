#include<stdio.h>
int main()
{
	int n;
	printf("Enter the mark secured by the student");
	scanf("%d",&n);
	if(n>=85 && n<=100 )
	{
		printf("Grade A");
	}
	else if(n<=84 && n>=70)
	{
		printf("Grade B");
	}
	else if(n>=55 && n<=69)
	{
		printf("Grade C");
	}
	else if(n>=40 && n<=54)
	{
		printf("Grade D");
	}
	else 
	printf("Grade F");
	return 0;
	
}
