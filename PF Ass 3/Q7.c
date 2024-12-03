#include <stdio.h>
#include <stdlib.h>

#define string char*

struct userProfile
{
    float* engagementRow;
};

struct contentMetadata
{
    string title, encodingFormat;
    int rating;
    float runtime;
};

int main ()
{
    double** engagementMatrix;
    int** deviceMatrix;
    struct contentMetadata* **contentMetadata; //2d array with each element a ptr to struct
}