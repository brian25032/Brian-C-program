//Programm to impliment loan
//Author:Brian Munene
//ADM:CT101/G/25032/24
#include <stdio.h>

int main(){
    int age;
    float income;

    //User input age
    printf("Input age: ");
    scanf("%d",&age);
    //User input income
    printf("Input income: ");
    scanf("%f",&income);
//Check whether the user meets the Conditions for a Loan
 if (age >= 21 && income >= 21000){
        printf("Congratulations you qualify for a loan.\n");
}else {printf("Unfortunately,we are unable to offer you a loan.\n");
}


  return 0;
}
