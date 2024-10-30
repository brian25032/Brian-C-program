//3D ARRAYS
//Author:Brian Munene
//Date:11//10/2024
//ADM:CT101/G/25032/24

#include <stdio.h>
int main(){

/*
a=first row
b=second row
c=third row
*/

int a,b,c;
int marks[2][2][3]={{{12,23,34,56,67},{64,31,57,90,18}},{{34,26,58,43,20},{54,87,78,45,9}}};

//for loop
for(a=0;a<2;a++){
for(b=0;a<2;b++)
for(c=0;c<3;c++)

printf("\n The marks are[%d][%d][%d]=%d",a,b,c,marks[a][b][c]);
}

return 0;
}
