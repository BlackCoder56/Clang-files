#include <stdio.h>

// Prototype for printS() function
void printS(char text[]);

int main()
{
    char name[] = "IInam";

    // printing string with %s
    // printf("%s\n", name);

    // calling the printS function with argument
    printS(name);

    return 0;
}

// Function to print char array
void printS(char text[])
{
    int counter = 0;

    while(text[counter] != '\0')
    {
        printf("%c", text[counter]);
        counter++;
    }

    printf("\n");
}