/*
Program to write a structure containing a book
Author:Brian Munene
ADM:CT101/G/25032/24
*/
#include <stdio.h>
#include <string.h>

//C Structure
struct Book{
char title[50];
char author[50];

int publication_year;
char ISBN[15];
float price;
};

int main() {


struct Book book1, book2;

strcpy(book1.title,"Introduction to c programming"),
strcpy(book1.author,"John Smith");

book1.publication_year=2022;
strcpy(book1.ISBN,"9780131103627");
book1.price=49.99;


//printf statements
printf("Book title:%s\n",book1.title);
printf("Author is:%s\n",book1.author);
printf("Year of publication:%d\n",book1.publication_year);
printf("ISBN:%s\n",book1.ISBN);
printf("Book price:%f",book1.price);

return 0;
}
