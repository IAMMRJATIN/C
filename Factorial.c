/*WAP to print factorial of a number using "while loop".*/

#include<stdio.h>
int main()
{
	int num,fact=1;
	int i=1;
	printf("Enter the number :\n");
	scanf("%d",&num);
	while(i<=num)
	{
		fact=i*fact;
		printf("fact=%d\n",fact);
		
		i++;
	}
	printf("the factorial of %d is : %d",num,fact);
}

/*WAP to print factorial of a number using "for loop".*/

#include <stdio.h>
int main()
{
	int i, num;
	int fact = 1;
	printf("Enter the number = ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=i*fact;
		printf("fact= %d\n",fact);
	}
}

/*WAP to print factorial of a number using "do-while loop".*/

#include <stdio.h>
int main()
{
	int i=1, num;
	int fact=1;
	printf("Enter the number = ");
	scanf("%d",&num);
	do
	{
		fact=i*fact;
		printf("fact=%d\n",fact);
		i++;
	}
	while(i<=num);
	
	printf("The factorial of %d is : %d",num,fact);
}
