#include <stdio.h>

int main()
{
    int id;
    char ukuran;
    long harga = 0;

    printf("\t\t Toko Butik\n");
    printf("========================\n");
    printf("1. Baju Kaos\n");
    printf("2. Celana Kaos\n");
    printf("========================\n");
    printf("Pilih no: ");
    scanf("%d", &id);
    printf("Pilih Ukuran [S/M/L]: ");
    scanf(" %c", &ukuran);

    if (id == 1)
    {
        if (ukuran == 'S' || ukuran == 's')
        {
            harga = 58000;
        }
        else if (ukuran == 'M' || ukuran == 'm')
        {
            harga = 65000;
        }
        else
        {
            harga = 87000;
        }
    }
    else if (id == 2)
    {
        if (ukuran == 'S' || ukuran == 's')
        {
            harga = 96000;
        }
        else if (ukuran == 'M' || ukuran == 'm')
        {
            harga = 112000;
        }
        else
        {
            harga = 130000;
        }
    }
    else
    {
        printf("Item tidak terdaftar\n");
    }

    printf("Harga: %ld\n", harga);
    return 0;
}