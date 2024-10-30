//Program for loop user input
//Author:Brian Munene
//ADM:CT101/G/25032/24

#include <stdio.h>
int main(){

int start,stop,sum=0;

//Input start
printf("Input number to start:");
scanf("%d",&start);

//Input stop
printf("Input number to stop:");
scanf("%d",&stop);

//For loop
for(int i=start;i<=stop;i++){
printf("%d\n",i);
sum=sum+start;
}

//Print Statement
printf("%d",start);
printf("%d",stop);
printf("The sum is %d\n",sum);

return 0;
}
