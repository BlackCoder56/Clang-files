#include <stdio.h>

void countS(char text[]);

int main()
{
    // char name[] = "Hi!";
    // char name[30];

    // printf("Enter text:");
    // scanf("%c", &name);

    char name[30];

    printf("Type your full name: \n");
    scanf("%s", &name);


    printf("Hello %s", name);
    countS(name);

    return 0;
}

// Function to count characters in a string
void countS(char text[])
{
    int counter = 0;

    while(text[counter] != '\0')
    {
        counter++;
    }

    printf("%i\n", counter);
}