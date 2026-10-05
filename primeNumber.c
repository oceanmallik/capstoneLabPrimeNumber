#include<stdio.h>

int main()
{
    int start, end;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: \n", start, end);

    for (int i = start; i <= end; i++)
    {
        int p = 1;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                p = 0;
                break;
            }
        }

        if (i > 1 && p == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}