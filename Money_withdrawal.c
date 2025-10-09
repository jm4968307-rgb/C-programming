#include<stdio.h>

int main()
{//Variable deceleration
int withdrawalamount; 
int balance=2000;//start

printf("Your current balance is %d \n" ,balance);

while(balance>0)//step
{
    printf("Enter withdrawalamount\n");
    scanf("%d" ,&withdrawalamount);
    
    balance -= withdrawalamount;//step balance=balance - withdrawalamount 
    printf("balance : %d" ,balance);
  }  
    printf("Insufficient balance");
    return 0;
}