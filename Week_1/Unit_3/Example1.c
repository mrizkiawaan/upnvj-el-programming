#include <stdio.h>
int main()
{
    int n, i, max, min, bil;
    printf("Program mencari data terbesar dan terkecil \n\n");
    printf("Masukkan banyaknya data: ");
    scanf("%d", &bil);
    max = bil;
    min = bil;

    for (i = 1; i <= bil; i++)
    {
        printf("Masukkan bilangan ke-%d: ", i);
        scanf("%d", &n);

        if (n > max)
        {
            max = n;
        }
        else if (n < min)
        {
            min = n;
        }
    }
    printf("\nData terbesar adalah %d\n", max);
    printf("\nData terkecil adalah %d\n", min);
    return 0;
}