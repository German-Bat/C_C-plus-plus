#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book 
{
    int pages;
    float price;
	char title[50];
};

typedef struct book Book;

void print_book(const Book* pb) 
{
    printf("Book: %s, Pages: %i, Price: %g\n", pb->title, pb->pages, pb->price);
}
 
int main()
{
    Book** p = (Book**)malloc(sizeof(Book*));
    char name[50];
    int page;
    float price;

    printf("Название: ");
    scanf("%[^\n]", name);
    printf("Кол-во страниц: ");
    scanf("%i", &page);
    printf("Цена: ");
    scanf("%f", &price);
    
    Book Book_str;
    *p = &Book_str;

    strcpy((*p)->title, name);
    (*p)->pages = page;
    (*p)->price = price;

    print_book(*p);

    free(p);
}
