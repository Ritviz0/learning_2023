/*1. Write a function to find biggest of 2 numbers using
    - if else*/

#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    if (n1 > n2)
        printf("Biggest:%d", n1);
    else
        printf("Biggest:%d", n2);
    return 0;
}