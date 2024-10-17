//C Function To Calculate Elecricity bill
//Author:Brian Munene
//Date:11/10/2024

#include <stdio.h>

int sum(int x);
int multiplication(int y);

/*
x=total amount
y=total bill
*/

int main(){
int a,b;
char c[20];
int ChargesPerUnit,NewPrice;

//Enter customerID
printf("Enter customerID:");
scanf("%d",&a);

//Enter unitsConsumed
printf("Enter unitsConsumed:");
scanf("%d",&b);

//Enter Name
printf("Enter Name:");
scanf("%s",&c);

if(b<=199){
  ChargesPerUnit=1.20;
  }
else if(b<400){
  ChargesPerUnit=1.50;
  }
else if(b=600){
  ChargesPerUnit=1.80;
  }
else{
  ChargesPerUnit=2.00;
  }

//function calling
int y=(b,ChargesPerUnit);

if(y>400){
   NewPrice=y * 0.15;
   }
//Ensure 100 is the minimum bill
if(y<100){
  y=1000;
  }

//function calling
int x=(y,NewPrice);

//PRINT STATEMENTS
printf("ID:%d",a);
printf("\n Units Consumed:%d",b);
printf("\n Name:%s",c);
printf("\n Charges Per Unit:%d",ChargesPerUnit);
printf("\n Total Amount:%d",y);

return 0;
}

//function defination
int sum(int y){
  return y;
  }
int multiplication(int x){
  return x;
  }

