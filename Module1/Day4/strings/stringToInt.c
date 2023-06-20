#include <stdio.h>

int stringToInt(const char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    // Handle optional sign
    if (str[0] == '-' || str[0] == '+')
    {
        if (str[0] == '-')
            sign = -1;
        i = 1;
    }

    // Process each character in the string
    while (str[i] != '\0')
    {
        // Ensure the character is a digit
        if (str[i] >= '0' && str[i] <= '9')
        {
            // Convert the digit character to integer and accumulate the result
            result = result * 10 + (str[i] - '0');
            i++;
        }
        else
        {
            // Invalid character encountered, break the loop
            break;
        }
    }

    // Apply the sign to the result
    result *= sign;

    return result;
}

int main()
{
    const char str[] = "12345"; // Example string

    int num = stringToInt(str);

    printf("String: %s\n", str);
    printf("Integer: %d\n", num);

    return 0;
}
