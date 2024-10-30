//A program to add user input
//Author: Brian Munene 
//ADM:CT101/G/25032/24
 #include <stdio.h>
 int main (){

 int age;
 float budget;
 double income;

 //input age
 printf("Enter age:");
 scanf("%d",&age);

 //input budget
 printf("Enter budget:");
 scanf("%f",&budget);

 //input income
 printf("Enter income:");
 scanf("%lf",&income);

 //print age
 printf("The age is %d",age);
 //print budget
 printf("\nThe amount of budget is %f",budget);

 //print income
 printf("\nThe amount of income is %lf",income);

 return 0;
 }
