#include <stdio.h>
#include <string.h>

void rotateString(char *str, int k)
{
    int len = strlen(str);

    // Calculate the effective rotation amount
    k = k % len;

    // Reverse the entire string
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    // Reverse the first k characters
    start = 0;
    end = k - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    // Reverse the remaining characters
    start = k;
    end = len - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[] = "Hello World"; // Example string
    int k = 3;                  // Number of rotations

    printf("Original string: %s\n", str);

    rotateString(str, k);

    printf("Rotated string: %s\n", str);

    return 0;
}
