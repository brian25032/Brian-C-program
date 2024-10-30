//A Program to calculate simple interest
//Author: Brian Munene 
//ADM:CT101/G/25032/24
#include <stdio.h>
int main () {

double principle, rate, time;

//Input principle
printf("Enter principle:");
scanf("%lf",&principle);

//Input rate
printf("Enter rate:");
scanf("%lf",&rate);

//input time
printf("Enter time:");
scanf("%lf",&time);

double amount=(principle*rate*time)/100;

//Print amount
printf("The Amount is %lf",amount);


return 0;
}
