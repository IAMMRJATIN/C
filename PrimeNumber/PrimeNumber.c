#include<stdio.h>

int main(){

    int num, i, result = 1;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num > 1){
        for (i = 2; i*i< num; i++){
            if(num%i==0){
                result = 0;
                break;
            }  
        }
        if (result == 0){
            printf("This is not a Prime number.");
          
        }
        else{
                printf("This is a prime number.");
            }
    }
    else{
        printf("This is not a prime number.");
    }
    return 0;
}