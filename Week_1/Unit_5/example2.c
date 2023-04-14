#include <stdio.h>
int main()
{
int nim[5];
float uts[5];
float uas[5];
float kuis[5];
float tugas[5];
float rata[5];
int i, banyak;
printf("Masukkan jumlah mahasiswa: ");
scanf("%d", &banyak);
for (i = 0; i < banyak; i++)
{
printf("\nData mahasiswa ke-%d", i + 1);
printf("\nMasukkan NIM mahasiswa: ");
scanf("%d", &nim[i]);
printf("\nMasukkan nilai kuis: ");
scanf("%f", &kuis[i]);
printf("\nMasukkan nilai UTS: ");
scanf("%f", &uts[i]);
printf("\nMasukkan nilai Tugas: ");
scanf("%f", &tugas[i]);
printf("\nMasukkan nilai UAS: ");
scanf("%f", &uas[i]);
rata[i] = (kuis[i] + tugas[i] + uts[i] + uas[i]) / 4;
}
printf("\n-----------------------------------------------------");
for (i = 0; i < banyak; i++)
{
printf("\nNIM: %d", nim[i]);
printf("\nNilai kuis: %f", kuis[i]);
printf("\nNilai tugas: %f", tugas[i]);
printf("\nNilai UTS: %f", uts[i]);
printf("\nNilai UAS: %f", uas[i]);
printf("\nNilai rata: %f", rata[i]);
printf("\n");
/*memasukkan %f ama %d di tiap printf*/
}
}