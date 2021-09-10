#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float jarak, jarak1, jarakAkhir, waktu, waktu1, waktuAkhir, kecepatan, kecepatan1, ratarataKec;
    int milih;    
    printf("=================================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung rumus Kecepatan, jarak, dan lain-lain\n");
    printf("=================================================================\n\n");

    do {
        puts( " Pilih angka dibawah untuk menghitung rumus(contohnya BELUM BENER):   \n"
        " 1. Kecepatan \n"
        " 2. Jarak \n"
        " 3. Waktu\n"
        " 4. Kecepatan Rata-rata\n");

        printf("Masukan angka yang ingin anda hitung: ");
        scanf("%i", &milih);


        if( milih == 1 ) {
            printf("Masukan jarak dalam km (contoh : 10): ");
            scanf("%f", &jarak);
            
            printf("masukan waktu dalam jam (contoh : 2): ");
            scanf("%f", &waktu);
                
            kecepatan1 = jarak / waktu;

            printf("Hasil dari rumus mencari kecepatan = jarak / waktu adalah %.2f km/jam\n", kecepatan1);
        } 

        if( milih == 2 ) {
            printf("masukan waktu dalam jam (contoh : 2): ");
            scanf("%f", &waktu);
            
            printf("masukan kecepatan dalam km/jam (contoh : 15): ");
            scanf("%f", &kecepatan);
                
            jarak1 = waktu * kecepatan;    

            printf("Hasil dari rumus mencari jarak = waktu * kecepatan adalah %.2f km\n", jarak1);
        } 

        if( milih == 3 ) {
            printf("Masukan jarak dalam km (contoh : 10): ");
            scanf("%f", &jarak);
            
            printf("masukan kecepatan dalam km/jam (contoh : 15): ");
            scanf("%f", &kecepatan);
                
            waktu1 = jarak / kecepatan;

            printf("Hasil dari rumus mencari waktu = jarak / kecepatan adalah %.2f jam\n", waktu1);
        } 

        if( milih == 4 ) {
            printf("Masukan jarak dalam km (contoh : 10): ");
            scanf("%f", &jarak);

            printf("Masukan jarak akhir dalam km (contoh : 10): ");
            scanf("%f", &jarakAkhir);
            
            printf("masukan waktu dalam jam (contoh : 2): ");
            scanf("%f", &waktu);

            printf("masukan waktu Akhir dalam jam (contoh : 2): ");
            scanf("%f", &waktuAkhir);
                
            ratarataKec = (jarakAkhir - jarak) / (waktuAkhir - waktu);

            printf("Hasil dari rumus mencari rata-rata kecepatan = (jarak akhir - jarak awal) / (waktu akhir - waktu awal) adalah %.2f km/jam\n", ratarataKec);
        } 

        if( milih > 4 ) {
            printf("Masukan angka yang benar!");
            printf("\n");
            printf("\n");
        }
    }

    // pilihan kembali ketika angka yang dimasukan salah
    
    while( milih > 4);
    
    return 0;
}
