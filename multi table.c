#include <stdio.h>

// Function to print multiplication table
void printMultiplicationTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main()
{
    int num;

    // Ask the user to enter a number
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    // Call the function with the entered number
    printMultiplicationTable(num);

    return 0;
}