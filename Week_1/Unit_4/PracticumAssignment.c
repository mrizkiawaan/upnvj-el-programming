//Program untuk menghitung nilai pangkat menggunakan fungsi rekursi
#include <stdio.h>
int power(int n1, int n2);
int main()
{
int base, power_num, result;
printf("Enter base number: ");
scanf("%d", &base);
printf("Enter power number(positive integer): ");
scanf("%d", &power_num);
result = power(base, power_num);
printf("%d^%d = %d", base, power_num, result);
return 0;
}
int power(int base, int power_num)
{
if (power_num != 0)
return (base * power(base, power_num - 1));
else
return 1;
}