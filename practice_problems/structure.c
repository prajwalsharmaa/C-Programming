//WAP to create a structure named Book with members name, author, published year and price and display information of 3 books
#include<stdio.h>
#include<string.h>
struct Book{
  char name[100];
  char author[100];
  int pubYear;
  double price;
};
int main(){
struct Book b1;
  strcpy(b1.name,"Thousand Splendid Sun");
  strcpy(b1.author,"Jonathan Jones");
  b1.pubYear = 1998;
  b1.price = 999;

struct Book b2 = {
  "Bhagwat Geeta",
  "Srila Vysas deva",
   0001,
   10.99
};
       
  
  printf("Name:%s\n",b2.name);
  printf("Author:%s\n",b2.author);
  printf("Published Year:%d\n",b2.pubYear);
  printf("Price:%.2lf",b2.price);
  return 0;
}
