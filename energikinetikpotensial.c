#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float massaBenda, kecepatanBenda, ketinggianBenda, energiKinetik, energiPotensial;
    int milih;
    printf("===============================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung Energi Kinetik dan Energi Potensial\n");
    printf("===============================================================\n\n");

    do {
        puts( " Pilih angka dibawah untuk menghitung:   \n"
        " 1. Energi Kinetik  \n"
        " 2. Energi Potensial  \n");

        printf("Masukan angka yang ingin anda hitung: ");
        scanf("%i", &milih);


        if( milih == 1 ) {
            printf("Masukan massa benda dalam kg (contoh : 5000): ");
            scanf("%f", &massaBenda);
            
            printf("Masukan kecepatan benda dalam m/s (contoh : 50): ");
            scanf("%f", &kecepatanBenda);

            energiKinetik = (massaBenda * (kecepatanBenda * kecepatanBenda)) / 2;

            printf("Energi Kinetik yaitu sebesar %.2f Joule", energiKinetik);
        } 

        if( milih == 2 ) {
            printf("Masukan massa benda dalam kg (contoh : 5000): ");
            scanf("%f", &massaBenda);
            
            printf("percepatan gravitasi bumi bernilai default yaitu 10 m/s^2\n");

            printf("Masukan ketinggian benda dalam m/s (contoh : 50): ");
            scanf("%f", &ketinggianBenda);

            energiPotensial =  massaBenda * 10 * ketinggianBenda;

            printf("Energi Potensial yaitu sebesar %.2f Joule", energiPotensial);
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
