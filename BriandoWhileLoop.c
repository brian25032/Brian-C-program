//Program for Do/while loop user input
//Author:Brian Munene

#include <stdio.h>
int main(){

int start,stop,sum=0;

//Input start
printf("Input number to start:");
scanf("%d",&start);

//Input stop
printf("Input number to stop;");
scanf("%d",&stop);

int i=start;

//Do/While loop
do{
printf("%d\n",i);
i++;
sum=sum+i;
}
while(i<=stop);

//Print Statement
printf("The sum is %d",sum);

return 0;
}
