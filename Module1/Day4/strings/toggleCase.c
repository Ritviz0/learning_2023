#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (islower(str[i]))
        {
            str[i] = toupper(str[i]); // Convert lowercase to uppercase
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]); // Convert uppercase to lowercase
        }

        i++;
    }
}

int main()
{
    char str[] = "Hello World"; // Example string

    printf("Original string: %s\n", str);

    toggleCase(str);
