#include <stdio.h>
#include <string.h>

struct Date
{
    int day, month, year;
};

struct Event
{
    char event_name[100];
    struct Date date;
    char location[100];
};

void displayEvent(struct Event event)
{
    printf("Name: %s\nDate: %d/%d/%d\nLocation: %s\n", event.event_name, event.date.day, event.date.month, event.date.year, event.location);
}

int main ()
{
    struct Event event;
    
    //didn't take input cos Q didn't mention it :|
    strcpy(event.event_name, "LAN Party");
    event.date.day = 06; event.date.month = 10; event.date.year = 2007;
    strcpy(event.location, "Pete's Basement");

    displayEvent(event);
}