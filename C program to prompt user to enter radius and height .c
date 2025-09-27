//C program to prompt user to enter radius and height
#include<stdio.h>

int main()
{
//Variable declaration 
int radius ;
int height;
float pi=3.1427;
float volume ;
float surfaceArea;

    printf("Enter Radius \n");
    scanf("%d" ,&radius);
    
    printf("Enter Height \n");
    scanf("%d" ,&height);
    
    volume=pi*radius*radius*height;
    surfaceArea=2*pi*radius*radius+2*pi*radius*height;
    
    printf("The volume is %f \n",volume);
    printf("The surfaceArea is %f \n",surfaceArea);
    return 0;
}