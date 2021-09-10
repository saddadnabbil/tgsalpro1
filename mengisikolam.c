#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float volume, debit, waktu, volume1, debit1, waktu1;
    int milih;
    printf("============================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung ;lamanya mengisi kolam, debit air, dan volume\n");
    printf("============================================================\n\n");

  
    do {
        puts( " Pilih angka dibawah untuk menghitung:   \n"
        " 1. Lama Mengisi air  \n"
        " 2. Energi Potensial  \n"
        " 3. Volume Air  \n");

        printf("Masukan angka yang ingin anda hitung: ");
        scanf("%i", &milih);


        if( milih == 1 ) {
            printf("Masukan volume air dalam liter (contoh : 300): ");
            scanf("%f", &volume);
            
            printf("Masukan debit air dalam liter (contoh : 50): ");
            scanf("%f", &debit);

            waktu1 = volume / debit;

            printf("Lamanya mengisi air dalam kolam yaitu sebesar %.f menit", waktu1);
        } 

        if( milih == 2 ) {
            printf("Masukan volume air dalam liter (contoh : 300): ");
            scanf("%f", &volume);

            printf("Masukan lamanya mengisi air dalam jam (contoh : 200): ");
            scanf("%f", &waktu);

            debit1 =  volume / waktu * 3600;

            printf("Jumlah debit air yaitu sebesar %.2f liter/detik", debit1);
        } 

        if( milih == 3 ) {
            printf("Masukan debit air dalam liter (contoh : 50): ");
            scanf("%f", &debit);

            printf("Masukan lamanya mengisi air dalam menit (contoh : 1): ");
            scanf("%f", &waktu);

            volume1 =  debit * waktu;

            printf("Jumlah debit air yaitu sebesar %.2f liter",volume1);
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
