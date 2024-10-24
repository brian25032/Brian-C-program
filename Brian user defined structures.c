/*
Program to user prompt in c structures
Author:Brian Munene
Date:24/10/2024
*/


#include <stdio.h>
#include <string.h>    //strcpy

struct Book{
char title[30];
char author[30];

int publication_year;
char ISBN[13];
float price;
};


int main() {

struct Book book1, book2;

strcpy(book1.title,"");
strcpy(book1.author,"");
book1.publication_year;
strcpy(book1.ISBN,"");
book1.price;

//Input Title
printf("Enter title of the book:");
scanf("%s",&book1.title);

//Input author
printf("Enter Author`s name:");
scanf("%s",&book1.author);

//Input publication year
printf("Enter publication year:");
scanf("%d",&book1.publication_year);

//Input ISBN
printf("Enter ISBN:");
scanf("%s",&book1.ISBN);

//Input price
printf("Enter book price:");
scanf("%f",&book1.price);


//Printf statements
printf("The book title is:%s\n",book1.title);
printf("The name of the Author is:%s\n",book1.author);
printf("Year of publication is:%d\n",book1.publication_year);
printf("The ISBN:%s\n",book1.ISBN);
printf("Book price is:%f\n",book1.price);

return 0;
}
