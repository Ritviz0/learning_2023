#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int j;

    for (j = 0; j < 10; j++)
    {
        sum += arr[j]; // Add each element to the sum
    }

    double average = (double)sum / 10; // Calculate the average

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
