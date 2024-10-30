//Program to calculate Electricity bill
//Author:Brian Munene
//ADM:CT101/G/25032/24

#include <stdio.h>
int main(){

int customerID, unitsconsumed;
char customername[20];
double chargesPerUnit, totalbill, surcharge, amountToPay;

//User Input Customer Details
//customerID
printf("Input customerID: ");
scanf("%d",&customerID);

//customername
printf("Input customername: ");
scanf("%s",&customername);

//units consumed
printf("Input unitsconsumed: ");
scanf("%d",&unitsconsumed);

//Charges per unit
if(unitsconsumed <=199){
chargesPerUnit = 1.20;
}else if(unitsconsumed < 400){
chargesPerUnit = 1.50;
}else if(unitsconsumed , 600){
chargesPerUnit = 1.80;
}else{chargesPerUnit = 2.00;
}

//Calculate the total bill
totalbill=unitsconsumed*chargesPerUnit;

if(totalbill > 400){
surcharge = totalbill*0.15;
totalbill += surcharge;
}

//Minimum bill should be 100
if(totalbill < 100){
totalbill = 100;
}

//calculate total amount of payment
amountToPay = totalbill;

//Output Display
printf("\n customerID: %d\n",customerID);
printf("customername: %s\n",customername);
printf("unitsconsumed: %d\n",unitsconsumed);
printf("chargesPerUnit: %.2f\n",chargesPerUnit);
printf("Total amount to pay: %.2f\n",amountToPay);

return 0;
}
