#include <stdio.h>
int main()
{
    int a, b, c;    // Define variables
    printf("Program Menukar 2 Buah Nilai \n\n");
    printf("Sebelum ditukar\n");
    printf("  \n");
    printf("Bilangan pertama = ");
    scanf("%i", &a); // Take input for first number
    printf("Bilangan kedua = ");
    scanf("%i", &b); // Take input for second number
    c = a;  // Assign first number (a) to temporary variable c
    a = b;  // Assign second number (b) to first number (a)
    b = c;  // Assign temporary variable (c) to second number (b)
    printf("Setelah ditukar\n");
    printf("  \n");
    printf("Bilangan pertama = % i \n", a);
    printf("Bilangan kedua = %i \n", b);
    return 0;
}