//Program for While Loop user input
//Author:Brian Munene

#include <stdio.h>
int main(){

int start,stop,sum=0;

//Input start
printf("Input number to start:");
scanf("%d",&start);

//Input stop
printf("Input number to stop:");
scanf("%d",&stop);

int i=start;

//While Loop
while(i<=stop){
printf("%d\n",i);
i++;
sum=sum+i;
}

//Print Statements
printf("The sum is %d\n",sum);

return 0;
}
