//2D ARRAYS
//Author:Brian Munene
//Date:11/10/2024

#include <stdio.h>
int main(){

int i,j;           //i=rows=2,j=columns=3
int marks[2][3]={{71,10,12,89,40},{81,45,28,64,02}};

//for loop
for(i=0;i<2;i++){
for(j=0;j<3;j++)

printf("\n The marks are[%d][%d]=%d",i,j,marks[i][j]);
}

return 0;

}


