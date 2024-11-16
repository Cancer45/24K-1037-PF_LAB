#include <stdio.h>
#include <string.h>

typedef struct
{
    char title[100];
    char author[100];
    int pub_year;
    float price;
}book;

void display_all (book all[], int n);
int searchby_title (char input[], book all[], int n);
int listby_author (char input[], book all[], int n);

int main ()
{
    int n;
    printf("number of books: ");
    scanf("%d", &n);
    book all[n];

    //enter info
    for (int i = 0; i < n; i++)
    {
        printf("Title: ");
        scanf("%s", all[i].title);
        printf("Author: ");
        scanf("%s", all[i].author);
        printf("Publication Year: ");
        scanf("%d", &all[i].pub_year);
        printf("Price: ");
        scanf("%f", &all[i].price);
        printf("\n");
    }

    //display all
    display_all (all, n);
    printf("\n");

    //search by title
    char input1[100];
    int found;

    printf("Search By Title: ");
    scanf("%s", input1);
    
    found = searchby_title (input1, all, n);
    if (!found)
    {
        printf("no books by this title\n");
    }

    else
    {
        printf("%d found\n", found);
    }

    //list by author
    char input2[100];

    printf("List By Author: ");
    scanf("%s", input2);
    
    if (!listby_author (input2, all, n))
    {
        printf("no titles by this author\n");
    }

    
}

void display_all (book all[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Title: %s\nAuthor: %s\nPublication Year: %d\n Price: %.2f\n", all[i].title, all[i].author, all[i].pub_year, all[i].price);
    }
}

int searchby_title (char input[], book all[], int n)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (!strcmp (input, all[i].title))
        {
            found++;
        }
    }
    return found;
}

int listby_author (char input[], book all[], int n)
{
    int re = 0;
    for (int i = 0; i < n; i++)
    {
        if (!strcmp (input, all[i].author))
        {
            printf("%s\n", all[i].title);
        }

        if (re == 0)
        {
            re = 1;
        }
    }

    return re;
}