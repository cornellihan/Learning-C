#include <stdio.h>
// Time Stamp: 6:56:00

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("The marks scored by student %d is: %d\n", i + 1, marks[i]);
    }

    return 0;
}