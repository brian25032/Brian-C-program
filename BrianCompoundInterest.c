//A Program to calculate compuond interest
//Author:BRIAN MUNENE 
//ADM:CT101/G/25032/24
#include <stdio.h>
int main (){

double principle, rate, time;

//Input principle
printf("Enter principle:");
scanf("%lf",&principle);

//Input rate
printf("Enter rate:");
scanf("%lf",&rate);

//Input time
printf("Enter time:");
scanf("%lf",&time);

double amount=principle*pow((1+rate/100),time);

//print amount
printf("The Amount is %lf",amount);

return 0;
}
