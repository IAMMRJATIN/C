/*   Write a program to print the average of n numbers.{without using array}   */

#include<stdio.h>
#include<conio.h>

// Time Complexity : O(n)  where, n = count
// Space Complexity : O(1)


int main() {
    int count; 
    int num; //used for take multiple inputs from the user
    int sum=0; //Initialize with '0' otherwise it takes garbage values.

    printf("\"\"\" Program for take Average of n numbers {without using array} \"\"\"");

    printf("\nEnter the total count of the numbers : "); //How many numbers we add
    scanf("%d", &count);
    
    for(int i = 0; i < count; i++){
        printf("\nEnter number %d: ", i+1);
        scanf("%d", &num);
        sum += num;
    }

    printf("%d\n", sum);
    
    return 0;
}  
