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
    printf("\n");
}
 
int main()
{
    size_t n;
    printf("Number of books: ");
    scanf("%zu", &n);

    Book* p = (Book*)malloc(sizeof(Book) * n);
    char name[50];
    int page;
    float price;

    for (size_t i = 0; i < n; i++)
    {
        printf("Book #%zu\n", i + 1);
        
        printf("Title: ");
        scanf("%s", name);

        printf("Page count: ");
        scanf("%i", &page);
        
        printf("Price: ");
        scanf("%f", &price);
    
        strcpy((&p[i])->title, name);
        (&p[i])->pages = page;
        (&p[i])->price = price;
    }

    for (size_t i = 0; i < n; i++)
        print_book(&p[i]);

    free(p);
}