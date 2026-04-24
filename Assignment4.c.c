#include<stdio.h>
int main()
{
float basic,hra,ta,gross,tax,net;
printf("enter basic pay:");
scanf("%f",&basic);
hra=0.10*basic;
ta=0.05*basic;
gross=basic+hra+ta;
tax=0.02*gross;
net=gross-tax;
printf("gross salary=%.2f\n",gross);
printf("net salary=%.2f\n",net);
} 
