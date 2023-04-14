//Program untuk mengidentifikasi nilai terbesar dari dua nilai input pengguna
#include <stdio.h>
int lebihbesar(int a, int b)
{
if (a > b)
{
return a;
}
else
{
return b;
}
}
int main()
{
int x, y, nilai;
printf("Masukkan nilai X: ");
scanf("%d", &x);
printf("Masukkan nilai Y : ");
scanf("%d", &y);
nilai = lebihbesar(x, y);
printf("Nilai terbesar adalah: %d \n", nilai);
return 0;
}