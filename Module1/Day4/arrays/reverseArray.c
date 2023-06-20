#include <stdio.h>

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int temp;

    while (start < end)
    {
        // Swap elements at start and end positions
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start and end towards the center
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};          // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    printf("Original Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse the array
    reverseArray(arr, n);

    printf("Reversed Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
