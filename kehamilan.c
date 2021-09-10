#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int tanggalTerakhir, tanggal, bulanTerakhir, usiaKehamilan1, bulan1, bulan2, bulanSekarang, tahunTerakhir, tahun, usiaKehamilan;   
    
    printf("==========================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung usia kehamilan\n");
    printf("==========================================\n\n");


    printf("Masukan tanggal terakhir anda haid (contoh : 10): ");
    scanf("%i", &tanggalTerakhir);

    printf("Masukan bulan terakhir anda haid (contoh : 5): ");
    scanf("%i", &bulanTerakhir);

    printf("Masukan tahun terakhir anda haid (contoh : 2021): ");
    scanf("%i", &tahunTerakhir);

    printf("Masukan bulan sekarang  (contoh : 8): ");
    scanf("%i", &bulanSekarang);

    bulan1 = bulanTerakhir;
    
    if( bulan1 > 3 ) {
        tahun = tahunTerakhir + 1;
    } 

    if( bulan1 < 3 ) {
        bulan1 = bulan1 + 12;
        tahun = tahunTerakhir;
    }  

    
    bulan2 = bulan1 - 3;

    tanggal = tanggalTerakhir + 7;

    if( usiaKehamilan < 0 ) {
        usiaKehamilan1 = usiaKehamilan + (usiaKehamilan * (-2));
    } else {
        usiaKehamilan1 = usiaKehamilan;
    }

    if( bulanTerakhir < 0 || bulanTerakhir > 12 ) {
        printf("Masukan Bulan yang benar!");
        printf("\n");
        printf("\n");
    }

    if( tanggalTerakhir < 0 || tanggalTerakhir > 31 ) {
        printf("Masukan Tanggal yang benar!");
        printf("\n");
        printf("\n");
    }

    printf("\nUsia 9 bulan kehamilan anda yaitu pada tanggal %i bulan %i tahun %i \n", tanggal, bulan2, tahun);

    return 0;
}
