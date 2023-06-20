#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0]; // Assume the first element is the minimum
    int max = arr[0]; // Assume the first element is the maximum
    int j;

    for (j = 1; j < 10; i++)
    {
        if (arr[j] < min)
        {
            min = arr[j]; // Update the minimum value if a smaller element is found
        }
        if (arr[j] > max)
        {
            max = arr[j]; // Update the maximum value if a larger element is found
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
