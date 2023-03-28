#include<stdio.h>
#include<conio.h>
int main()
{
    float r1,r2,r3;
    printf("Enter r1");
    scanf("%f",&r1);
    printf("enter r2");
    scanf("%f",&r2);
    printf("enter r3");
    scanf("%f",&r3);
    float ma=r1+r2+r3;
    printf("max resistence is %f \n",ma);
    float mi=r1*r2*r3/r1*r2+r2*r3+r3*r1;
    printf("min resistence is %f",mi);
    return 0;

}