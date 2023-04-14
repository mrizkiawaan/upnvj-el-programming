#include <stdio.h>
int main()
{
char nama[10];
int nim[10];
int nilai[10];
int i, n;
printf("Banyak data: ");
scanf("%d", &n);
printf("\n");
for (i = 0; i < n; i++)
{
printf("Data ke-%d \n", i + 1);
printf("Nama: ");
scanf(" %s", &nama[i]);
printf("NIM: ");
scanf(" %d", &nim[i]);
printf("Nilai: ");
scanf(" %d", &nilai[i]);
printf("\n");
}
printf("---------------------------------\n");
for (i = 0; i < n; i++)
{
char *pNama = &nama[i];
/*bikin pointer */
printf("\nData ke-%d", i + 1);
printf("\nNama: %s", pNama);
printf("\nNIM: %d", nim[i]);
printf("\nNilai: %d", nilai[i]);
printf("\n");
}
return 0;
}