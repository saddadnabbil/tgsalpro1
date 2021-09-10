#include <stdio.h>
#include <stdlib.h>

int main()
{
    int waktuAwal, waktuAkhir, waktuBaru, pekerja, pekerjaAkhir, volumeAwal, volumeAkhir;
    
    printf("============================================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita menghitung jumlah pekerja baru agar waktu pengerjaan lebih cepat\n");
    printf("============================================================================\n\n");
    
    printf("Masukan waktu awal dari sebuah pekerjaan dalam hari (contoh: 14):  ");
    scanf("%i", &waktuAwal);

    printf("Masukan pekerja awal dari sebuah pekerjaan (contoh: 12):");
    scanf("%i", &pekerja);
    
    printf("Masukan waktu yang ingin dipercepat dari sebuah pekerjaan dalam hari(contoh 7): ");
    scanf("%i", &waktuAkhir);
    
    volumeAwal = waktuAwal * pekerja;
    volumeAkhir = waktuAkhir;
    pekerjaAkhir = volumeAwal / volumeAkhir;
    
    printf("\nBanyaknya pekerja yang diperlukan adalah  %i orang agar pembangunan selesai dalam waktu %i hari saja.\n", pekerjaAkhir, waktuAkhir);

    return 0;
}
