//Programm to calculate fine for overdue library books
//Author:Brian Munene
//ADM:CT101/G/25032/24
#include <stdio.h>

int main(){
    int bookID;
    int dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;

    //User Input bookID
    printf("Input bookID:");
    scanf("%d",&bookID);

    //User Input dueDate
    printf("Input dueDate(as a whole number):");
    scanf("%d",&dueDate);

    //User Input returnDate
    printf("Input returnDate(as a whole number):");
    scanf("%d",&returnDate);
//Calculate the days overdue
    daysOverdue = returnDate - dueDate;

//Determine fine rates based on days overdue
    if(daysOverdue <= 0){
        fineRate = 0.0;
}else if(daysOverdue <= 7){
        fineRate = 20.0;
}else if(daysOverdue <= 14){
         fineRate =50.0;
}else {  fineRate = 100.0;
}

//Calculate the total fine amount
      fineAmount = fineRate * daysOverdue;

//Display the Results
printf("\n--- Library Fine Details ---\n");
printf("Book ID:%d\n",bookID);
printf("Due Date:%d\n",dueDate);
printf("Return Date:%d\n",returnDate);
printf("Days Overdue:%d\n",daysOverdue);
printf("Fine Rate: Ksh %.2f per day\n",fineRate);
printf("Total Fine Amount: Ksh %.2f\n",fineAmount);

    return 0;
}
