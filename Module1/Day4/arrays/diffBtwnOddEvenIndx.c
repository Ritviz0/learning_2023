#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};    // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += arr[i]; // Add elements at even indices to evenSum
        }
        else
        {
            oddSum += arr[i]; // Add elements at odd indices to oddSum
        }
    }

    int diff = evenSum - oddSum;

    printf("Sum of elements at even indices: %d\n", evenSum);
    printf("Sum of elements at odd indices: %d\n", oddSum);
    printf("Difference: %d\n", diff);

    return 0;
}
