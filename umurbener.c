#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int tahun, tahunLahir, tahunSekarang, bulan, bulanSekarang, bulanLahir, bulan1, tanggal, tanggalSekarang, tanggalLahir;
    printf("============================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung usia dalam tahun, bulan dan hari\n");
    printf("============================================================\n\n");

    
    printf("Masukan tanggal lahir anda ( contoh : 9 ):  ");
    scanf("%i", &tanggalLahir);

    printf("Masukan bulan lahir anda ( contoh : 5 ): ");
    scanf("%i", &bulanLahir);

    printf("Masukan tahun lahir anda ( contoh : 2003 ): ");
    scanf("%i", &tahunLahir);

    printf("Masukan tanggal sekarang ( contoh : 10 ): ");
    scanf("%i", &tanggalSekarang);

    printf("Masukan bulan sekarang ( contoh : 9 ): ");
    scanf("%i", &bulanSekarang);

    printf("Masukan tahun sekarang ( contoh : 2021 ): ");
    scanf("%i", &tahunSekarang);

    tahun = tahunSekarang - tahunLahir;

    bulan = bulanSekarang - bulanLahir;

    if( tanggalSekarang > tanggalLahir ) {
        tanggal = tanggalSekarang - tanggalLahir;
    } else  {
        bulan = bulan - 1;
        tanggal = 31 + (tanggalSekarang - tanggalLahir);
    }

    if( tanggal > 31 ) {
        tanggal = 0;
        bulan += 1; 
    } else {
    }


    printf("\nUmur anda adalah %i tahun %i bulan %i hari", tahun, bulan, tanggal);

    return 0;
}
