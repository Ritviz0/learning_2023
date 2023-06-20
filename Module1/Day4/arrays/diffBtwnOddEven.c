#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};    // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i]; // Add even elements to evenSum
        }
        else
        {
            oddSum += arr[i]; // Add odd elements to oddSum
        }
    }

    int diff = evenSum - oddSum;

    printf("Sum of even elements: %d\n", evenSum);
    printf("Sum of odd elements: %d\n", oddSum);
    printf("Difference: %d\n", diff);

    return 0;
}
