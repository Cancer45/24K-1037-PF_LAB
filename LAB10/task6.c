#include <stdio.h>
#include <string.h>

struct packs
{
    char name[100];
    char destination[100];
    float duration;
    float cost;
    int seats;
} pack[3];

void book ();

int main ()
{
    strcpy(pack[0].name, "Basic");
    strcpy(pack[1].name, "Economy");
    strcpy(pack[2].name, "Premium");
    
    strcpy(pack[0].destination, "Amstredam");
    strcpy(pack[1].destination, "Budapest");
    strcpy(pack[2].destination, "Cape Town");

    pack[0].duration = 5;
    pack[1].duration = 2;
    pack[2].duration = 8;

    pack[0].cost = 235;
    pack[1].cost = 95;
    pack[2].cost = 375;

    pack[0].seats = 3;
    pack[1].seats = 5;
    pack[0].seats = 2;

    book();
    
}

void book ()
{
    int selection;
    printf("PACKAGES\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s Package\nDestination: %s\nDuration: %.1f\nPrice: %.2f\nSeats: %d\n", pack[i].name, pack[i].destination, pack[i].duration, pack[i].cost, pack[i].seats);
        printf("\n");
    }

    do
    {
        printf("Please select your desired package (1-3): ");
        scanf("%d", &selection);
    } while (selection < 1 || selection > 3);
    
    printf("%s Package Booked!\n", pack[selection - 1].name); 
}
