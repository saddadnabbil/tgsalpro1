#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float tinggi, pria, wanita;
    int milih;
    printf("=====================================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung berapa berat ideal anda\n");
    printf("=====================================================================\n\n");

    do {
        puts( "Pilih jenis kelamin anda: \n"
        " 1. Pria\n"
        " 2. Wanita\n");

        printf("Masukan angka jenis kelamin anda: ");
        scanf("%i", &milih);


        if( milih == 1 ) {
            printf("Masukan tinggi badan anda dalam cm (contoh: 172): ");
            scanf("%f", &tinggi);
            
            pria = (tinggi - 100)  - ((tinggi - 100) * 10 / 100);

            printf("Berat badan ideal anda yaitu sebesar %.2f kg\n", pria);
        } 

        if( milih == 2 ) {
            printf("Masukan tinggi badan anda dalam cm (contoh: 172): ");
            scanf("%f", &tinggi);

            wanita = (tinggi - 100)  - ((tinggi - 100) * 15 / 100);

            printf("Berat badan ideal anda yaitu sebesar %.2f kg\n", pria);
        } 

        if( milih > 2 ) {
            printf("Masukan angka yang benar!");
            printf("\n");
            printf("\n");
        }
    }

    // pilihan kembali ketika angka yang dimasukan salah
    
    while( milih > 2);
    
    return 0;
}