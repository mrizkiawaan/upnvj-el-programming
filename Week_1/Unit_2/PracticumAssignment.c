#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    char studentName[50], programDescription[50], programCode;
    printf("Masukkan nama mahasiswa: ");
    scanf("%s", &studentName);

    printf("Pilih kode Program Studi[A/B/C/D]  : ");
    programCode = getche();

    switch(programCode) {
        case 'A':
        case 'a':
            strcpy(programDescription, "Program Studi Teknik Perkapalan");
            break;
        case 'B':
        case 'b':
            strcpy(programDescription, "Program Studi Teknik Industri");
            break;
        case 'C':
        case 'c':
            strcpy(programDescription, "Program Studi Teknik Mesin");
            break;
        case 'D':
        case 'd':
            strcpy(programDescription, "Program Studi Teknik Elektro");
            break;
        default:
            strcpy(programDescription, "Program not found");
            break;
    }

    printf("\n\nNama Mahasiswa: %s\n", studentName);
    printf("Kode Program Studi: %c\n", programCode);
    printf("Nama Program Studi: %s\n", programDescription);

    getch();
    return 0;
}

/*This code is the same with module, the only difference is placement of case capital and non capital letter*/