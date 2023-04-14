#include <stdio.h> //Program untuk penjumlahan kedua bilangan
int jumlah(int x, int y);
int main()
{
int a, b, c;
printf("A = ");
scanf("%d", &a);
printf("B = ");
scanf("%d", &b);
c = jumlah(a, b);
printf("Jumlah kedua bilangan A dan B adalah: % d \n", c);
return 0;
}
int jumlah(int a, int b)
{
int hasil;
hasil = a + b;
return (hasil);
}