// 5. Write a program to demonstrate the swapping the fields of two structures using pointers

#include <stdio.h>

struct Point
{
    int x;
    int y;
};

void swapPoints(struct Point *p1, struct Point *p2)
{
    // Swap the x values
    int temp = p1->x;
    p1->x = p2->x;
    p2->x = temp;

    // Swap the y values
    temp = p1->y;
    p1->y = p2->y;
    p2->y = temp;
}

int main()
{
    // Create two Point structures
    struct Point point1 = {1, 2};
    struct Point point2 = {3, 4};

    // Display the original points
    printf("Before swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Call the swapPoints function to swap the fields of the structures
    swapPoints(&point1, &point2);

    // Display the swapped points
    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
