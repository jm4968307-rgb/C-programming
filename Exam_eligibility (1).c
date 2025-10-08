#include<stdio.h>

int main()
{
//Variable declaration 
int Attendancepercentage;
int Averagemarks;

    printf("Enter Attendance Percentage \n");
    scanf("%i" ,&Attendancepercentage);
    
    printf("Enter Average Marks \n");
    scanf("%i" ,&Averagemarks);
    if(Attendancepercentage>=75 && Averagemarks>=40){
    printf("You are eligible");
    }
    else{(printf("You are not eligible"));
    }
    return 0;
}