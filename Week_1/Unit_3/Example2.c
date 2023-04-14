#include <stdio.h> //Program untuk membuat objek persegi
int main()
{
    int x, y;
    for (y = 1; y <= 4; y++)
    {
        for (x = 1; x <= 4; x++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}