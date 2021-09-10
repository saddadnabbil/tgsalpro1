#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float jarakSebenarnya, jarakSebenarnya1, jarakSebenarnya2, jarakPeta, jarakPeta1, jarakPeta2, skala, skala1, skala2;
    int milih;    
    printf("=============================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung Jarak sebenarnya pada sebuah peta\n");
    printf("=============================================================\n\n");

    do {
        puts( " Pilih angka dibawah untuk menghitung:   \n"
        " 1. Jarak Sebenarnya \n"
        " 2. Skala pada \n"
        " 3. Jarak Pada Peda\n");

        printf("Masukan angka yang ingin anda hitung: ");
        scanf("%i", &milih);


        if( milih == 1 ) {
            printf("Masukan Jarak pada sebuah peta dalam cm (contoh : 10): ");
            scanf("%f", &jarakPeta);
            
            printf("Masukan Skala pada sebuah peta (contoh : 1:5000 maka ditulis 5000): ");
            scanf("%f", &skala);
                
            jarakSebenarnya1 = jarakPeta * skala / 100000;

            printf("Jarak Sebenarnya dari sebuah peta yaitu %.2f km\n", jarakSebenarnya1);
        } 

        if( milih == 2 ) {
            printf("Masukan Jarak pada sebuah peta dalam cm (contoh : 10): ");
            scanf("%f", &jarakPeta);
            
            printf("Masukan Jarak sebenarnya dalam km (contoh : 5): ");
            scanf("%f", &jarakSebenarnya);
                
            skala1 = jarakPeta / jarakPeta;    
            skala2 = jarakSebenarnya * 100000 / jarakPeta;

            printf("Skala dari sebuah peta yaitu %.2f:%.2f\n", skala1, skala2);
        } 

        if( milih == 3 ) {
            printf("Masukan Jarak sebenarnya dalam km (contoh : 5): ");
            scanf("%f", &jarakSebenarnya);
            
            printf("Masukan Skala pada sebuah peta (contoh : 1:5000 maka ditulis 5000): ");
            scanf("%f", &skala);
                
            jarakPeta1 = jarakSebenarnya * 100000 / skala;

            printf("Jarak pada peta yaitu %.2f cm\n", jarakPeta1);
        } 

        if( milih > 3 ) {
            printf("Masukan angka yang benar!");
            printf("\n");
            printf("\n");
        }
    }

    // pilihan kembali ketika angka yang dimasukan salah
    
    while( milih > 3);
    
    return 0;
}
