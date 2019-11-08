#include <stdio.h>

#define ARRAY_SIZE 10

void rotateleft(int *p, int size, int rotations);
void rotateright(int *p, int size, int rotations);

int main()
{
    int num = 0;
    int a[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        a[i] = i + 1;
    }

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        rotateleft(a, ARRAY_SIZE, -num); // a es igual que &a[0]
    }
    else
    {
        rotateright(a, ARRAY_SIZE, num);
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("[%d] ", a[i]);
    }
    printf("\n");
}

void rotateleft(int *p, int size, int rotations)
{
    for (int i = 0; i < rotations; i++) // number of rotations
    {
        int t = *p; // assign first element to t

        for (int j = 0; j < size - 1; j++) // j is the 'offset'
        {
            *(p + j) = *(p + j + 1);
        }
        *(p + size - 1) = t;
    }
}

void rotateright(int *p, int size, int rotations)
{
    for (int i = 0; i < rotations; i++)
    {
        int t = *(p + size - 1);

        for (int j = size - 1; j >= 0; j--)
        {
            *(p + j) = *(p + j - 1);
        }
        *p = t;
    }
}