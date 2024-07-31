/* WAP to add two numbers. */

#include<stdio.h>
int main()
{
	int num1,num2,sum;
	
	printf("Enter the value of number1 and number2 =\n");
	scanf("%d%d",&num1,&num2);
	
	sum=num1+num2;
	
	printf("The sum of %d and %d is %d",num1,num2,sum);
}
