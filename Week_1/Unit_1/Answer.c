#include <stdio.h>

int main()
{
    // Number 1
    printf("[SOAL 1]\n");
    char name[20];
    printf("Halo, siapa nama Anda? ");
    scanf("%s", &name);
    printf("Senang berteman denganmu, %s.\n", name);

    // Number 2
    printf("[SOAL 2]\n");
    int StartHour, FinishHour, biaya, durasi, bayar; 
    biaya = 8000; 
    printf("Masukkan jam mulai : ");
    scanf("%i", &StartHour);    
    printf("Masukkan jam selesai : ");
    scanf("%i", &FinishHour);   
    durasi = FinishHour - StartHour; 
    printf("Durasi penggunaan warnet: %i jam\n", durasi);   
    bayar = biaya*durasi;   
    printf("Biaya yang harus dibayarkan Rp %i", bayar);  
    return 0;
} 