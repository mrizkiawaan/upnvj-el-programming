// Program untuk menghitung Luas Area dari suatu lingkaran
#include <stdio.h>
#define phi 3.141597
int main()
{
    // Isilah garis kosong dibawah dengan benar
    // Deklarasikan variabel luas, jari-jari dan keliling untuk dapat membuat program bekerja
    float area, circumference, r;
    printf("Masukan nilai jari - jari lingkaran: ");
    scanf("%f", &r);
    area = phi * (r * r);
    circumference = 2 * phi * r;
    printf("\nLuas lingkaran dengan jari - jari %f adalah: % f ", r, area);
    printf("\nKeliling lingkaran dengan jari - jari %f adalah: %f", r, circumference);
    return 0;
}