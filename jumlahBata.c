#include <stdio.h>
#include <stdlib.h>

int main()
{
    float panjangRuangan, lebarRuangan, tinggiRuangan; 
    float volumeRuangan, volumeBata, jumlahBata;
    
    printf("===============================================================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung jumlah batu bata merah yang dibutuhkan untuk membuat sebuah ruangan \n");
    printf("===============================================================================================\n\n");

    printf("Masukan Panjang ruangan anda dalam meter(m): ");
    scanf("%f", &panjangRuangan);

    printf("Masukan Lebar ruangan andadalam meter(m): ");
    scanf("%f", &lebarRuangan);

    printf("Masukan Tinggi ruangan anda dalam meter(m): ");
    scanf("%f", &tinggiRuangan);

    volumeRuangan = panjangRuangan * lebarRuangan * tinggiRuangan;

    volumeBata = 0.21 * 0.1 * 0.067;

    jumlahBata = volumeRuangan / volumeBata;


    printf("\nVolume ruangan anda yaitu %.2f meter kubik,\ndan Jumlah Batu bata merah yang dibutuhkan untuk ruangan anda sebanyak %.0f!\n", volumeRuangan, jumlahBata);


    return 0;
}