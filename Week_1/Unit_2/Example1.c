#include <stdio.h>
int main()
{
    float harga, total, diskon;
    int jumlah;

    printf("Program hitung diskon\n");
    printf("  \n");
    printf("Harga barang Rp");
    scanf("%f", &harga);
    printf("Jumlah beli: ");
    scanf("%d", &jumlah);

    total = harga * jumlah;
    printf("\nTotal harga adalah Rp %f \n", total);
    printf("Mendapat diskon Rp");

    if (total > 100000)
    {
        diskon = total * 0.2;
    }
    else if (total > 50000)
    {
        diskon = total * 0.1;
    }
    else
    {
        diskon = 0;
    }

    printf("%f\n\n", diskon);
    printf("Maka, Total yang harus dibayar adalah Rp % f \n", total - diskon);
    return 0;
} 

/*if you get more 0 at total and diskon that is because the output is in float (decimal number)*/