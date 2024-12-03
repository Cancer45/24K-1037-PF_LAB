#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getStr ()
{
    size_t count = 1;
    char tmp;
    char* str = (char*)malloc(count * sizeof(char));

    if (!str)
    {
        perror("failed to allocate memory\n");
        return NULL;
    }

    *str = '\0';

    while(1)
    {
        tmp = getchar();

        if (tmp == '\n')
        break;

        count++;
        str = (char*)realloc(str, count * sizeof(char));
        str[count - 2] = tmp;
        str[count - 1] = '\0';
    }

    return str;
}

int updateSupply (char**** speciesSupplies, int numSpecies, int* rowWidth)
{
    printf("\n");
    char *speciesName, *supplyName, *tmp;

    printf("Species Name: ");
    speciesName = getStr();
    printf("Supply Name: ");
    supplyName = getStr();

    for (int i = 0; i < numSpecies; i++)
    {
        if (!strcmp((*speciesSupplies)[i][0], speciesName))
        {
            for (int j = 1; j < rowWidth[i]; j++)
            {
                if (!strcmp((*speciesSupplies)[i][j], supplyName))
                {
                    printf("New Supply: ");
                    tmp = getStr();

                    if (tmp)
                    {
                        (*speciesSupplies)[i][j] = tmp;
                        return 1;
                    }
                
                }

            }
        }
    }
    return 0;
}

int removeSpecies (char**** speciesSupplies, int numSpecies, int* rowWidth)
{
    printf("\n");
    char *speciesName, *tmp;

    printf("Species Name: ");
    speciesName = getStr();

    for (int i = 0; i < numSpecies; i++)
    {
        if (!strcmp((*speciesSupplies)[i][0], speciesName))
        {
            for (int j = 0; j < rowWidth[i]; j++)
            {
                free ((*speciesSupplies)[i][j]);
            }
            rowWidth[i] = 0;
            return 1;
        }
    }
    return 0;
}

void displayInventory(char*** speciesSupplies, int numSpecies, int* rowWidth)
{
    int flag = 0;
    printf("\n");
    for (int i = 0; i < numSpecies; i++)
    {   
        if (rowWidth[i] > 0)
        {
            if (!flag)
            flag = 1;

            printf("%s: ", speciesSupplies[i][0]);

            for (int j = 1; j < rowWidth[i]; j++)
            {
                printf("%s", speciesSupplies[i][j]);
                if (j != (rowWidth[i] - 1))
                printf(" | ");
            }
            
            printf("\n");
        }
    }
    if (!flag)
    printf("INVENTORY EMPTY\n");
}

int main ()
{
    char*** speciesSupplies;
    int numSpecies, numSupplies;

    printf("Number of Species: ");
    scanf("%d", &numSpecies);
    getchar(); //clear input buffer

    int rowWidth[numSpecies]; 
    speciesSupplies = (char***)malloc(numSpecies * sizeof(char**)); //allocate rows

    for (int i = 0; i < numSpecies; i++)
    {
        speciesSupplies[i] = (char**)malloc(sizeof(char*)); //allocate one column for name
        printf("\nSpecies (%d) Name: ", i + 1);
        speciesSupplies[i][0] = getStr();

        printf("\nNumber of Supplies for %s: ", speciesSupplies[i][0]);
        scanf("%d", &numSupplies);
        getchar(); //clear input buffer

        rowWidth[i] = numSupplies + 1; //first column is the name of the species
        speciesSupplies[i] = (char**)realloc(speciesSupplies[i], (numSupplies + 1) * sizeof(char*)); //realloc to include name and supplies
        printf("\n"); //newline

        for (int j = 1; j < rowWidth[i]; j++)
        {
            printf("Supply %d [%s]: ", j, speciesSupplies[i][0]);
            speciesSupplies[i][j] = getStr();
        }
    }

    char tmp;

    while(1)
    {
        printf("\nUpdate Supplies?\nPress 'n' for no: ");
        tmp = getchar();

        if (tmp == 'n')
        break;
        
        if (!updateSupply (&speciesSupplies, numSpecies, rowWidth))
        printf("Supply not found\n");
    }

    while(1)
    {
        printf("\nRemove Species?\nPress 'n' for no: ");
        tmp = getchar();
        
        if (tmp == 'n')
        break;

        if (!removeSpecies (&speciesSupplies, numSpecies,rowWidth))
        printf("Species not found\n");
    }

    displayInventory(speciesSupplies, numSpecies, rowWidth);

    for (int i = 0; i < numSpecies; i++)
    {
        if (rowWidth[i] > 0)
        {
            for (int j = 0; j < rowWidth[i]; j++)
            free(speciesSupplies[i][j]); //free char*
        }

        free(speciesSupplies[i]); //free char**
    }
    free(speciesSupplies); //free char***
}