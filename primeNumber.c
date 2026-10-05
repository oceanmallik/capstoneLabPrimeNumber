#include<stdio.h>

int main()
{
    int start, end;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: \n", start, end);

    // First loop: will go through all the numbers from first to end
    for (int i = start; i <= end; i++)
    {
        int p = 1;

        // Second loop: Checks if it can be devided with numbers other that 1 and that number.
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                p = 0;
                break;
            }
        }

        // if the second loop fails to make p = 0, it prints the number which is the prime number. Checks is p really still 1 and i is not 1 and it is bigger than 1. 
        if (i > 1 && p == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}