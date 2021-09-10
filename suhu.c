#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float celcius, kelvin, fahrenheit, reamur;
    int milih;
    printf("===============================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan mengkonversi Celcius ke Fahrenheit, Kelvin, dan Reamur\n");
    printf("===============================================================\n\n");

    do {
        puts( " Pilih angka dibawah untuk di konversi:   \n"
        " 1. Celcius ke Fahrenheit  \n"
        " 2. Celcius ke Kelvin \n"
        " 3. Celcius ke Reamur \n");

        printf("Masukan angka yang ingin anda konversi: ");
        scanf("%i", &milih);


        if( milih == 1 ) {
            printf("Masukan Celcius (contoh: 100): ");
            scanf("%f", &celcius);
            
            fahrenheit = (9 / 5) * celcius + 32;

            printf("Hasil konversi %.2f °C ke Fahrenheit adalah %.2f °F ", celcius, fahrenheit);
        } 

        if( milih == 2 ) {
            printf("Masukan Celcius (contoh: 100): ");
            scanf("%f", &celcius);
            
            kelvin = celcius + 273;

            printf("Hasil konversi %.2f °C ke Kelvin adalah %.2f K ", celcius, kelvin);
        } 

        if( milih == 3 ) {
            printf("Masukan Celcius (contoh: 100): ");
            scanf("%f", &celcius);
            
            reamur = (4 / 5) * celcius;

            printf("Hasil konversi %.2f °C ke Reamur adalah %.2f ºRé", celcius, reamur);
        } 
        
        if( milih > 3 ) {
            printf("Masukan angka yang benar!");
            printf("\n");
            printf("\n");
        }
    }

    // pilihan kembali ketika angka yang dimasukan salah
    
    while( milih > 2);
    
    return 0;
}
