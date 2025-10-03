//C program for a bank that offers loans
#include<stdio.h>

int main()
{
//varble declaration 
int age;
int annualIncome ;
    printf("Enter your age \n");
    scanf("%d" ,&age);
    
    printf ("Enter your annualIncome\n");
    scanf("%d" ,&annualIncome);
    
    if(age>=21 && annualIncome>=21000){
    printf("Congratulations you qualify for the loan");
    }
    else{
    printf("Unfortunately,we are unable to offer you a loan at this time ");
    }
    
    return 0;
}