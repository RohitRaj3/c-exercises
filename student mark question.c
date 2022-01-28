#include <stdio.h>

int main()
{
    float a=0,b=0,c=0,d=0,e=0;
    float totalno, average, percentage;
    
    printf("enter five number number:\n");
    scanf("%f %f %f %f %f",&a, &b, &c, &d, &e);
    
    totalno = a+b+c+d+e;
    average = totalno/5;
    percentage= (totalno/500)*100;
    
    printf(" total marks: %f \n", totalno);
    printf("average marks: %f \n", average);
    printf("percentage overall : %f \n", percentage);
    
    

    return 0;
}
