#include <stdio.h> //Program untuk membuat objek segitiga

int main()
{
    int n, x, y;
    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &n);
    for (x = 1; x <= n; x++)
    {
        for (y = 1; y <= x; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
} 