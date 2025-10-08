#include<stdio.h>

int main()
{
//variable declaration 
int WaterUnitsConsumed;
float WaterBill;

    printf("Enter Water Units Consumed \n");
    scanf("%i" ,&WaterUnitsConsumed);
    
    if(WaterUnitsConsumed<=30){
    WaterBill=WaterUnitsConsumed*20;
    
     }else if(WaterUnitsConsumed<=60){
     WaterBill=WaterUnitsConsumed*25;
     
     }else{
     WaterBill=WaterUnitsConsumed*30;
     }
     printf("Total water bill: %.2f KES\n",WaterBill);
    return 0;
}