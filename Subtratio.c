/* WAP to find subtration of two numbers. */

#include<stdio.h>
int main()
{
	int num1,num2,subtract;
	
	printf("Enter the value of number1 and number2 :\n");
	scanf("%d%d",&num1,&num2);
	
	subtract=num1-num2;
	
	printf("The result of the subtration from %d to %d is %d",num1,num2,subtract);
}
