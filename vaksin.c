#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tahun, bulan, tanggal, bulan_vaksin2, bulan1, tahun1;

    printf("=========================================================\n");
    printf("Selamat datang\n");
    printf("Disini anda akan mengetahui kapan anda harus vaksin kedua\n");
    printf("=========================================================\n\n");
    
    printf("Tanggal berapa Anda vaksin pertama: ");
    scanf("%i", &tanggal);

    printf("Bulan keberapa Anda vaksin pertama: ");
    scanf("%i", &bulan);

    printf("Tahun berapa Anda vaksin pertama: ");
    scanf("%i", &tahun);

    bulan1 = bulan;
    tahun1 = tahun - 1900;

    struct tm start = {
        .tm_mon = bulan1,
        .tm_mday = tanggal,
        .tm_year = tahun1
    };
    mktime(&start); 

    printf("\nAnda akan vaksin kedua pada %s\n", asctime(&start));

    return 0;
}