#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mean, kesatu, kedua, ketiga, keempat, kelima;
    
    printf("==================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung rata-rata dari 5 angka\n");
    printf("==================================================\n\n");

    printf("Masukan angka ke-1: ");
    scanf("%f", &kesatu);

    printf("Masukan angka ke-2: ");
    scanf("%f", &kedua);

    printf("Masukan angka ke-3: ");
    scanf("%f", &ketiga);

    printf("Masukan angka ke-4: ");
    scanf("%f", &keempat);

    printf("Masukan angka ke-5: ");
    scanf("%f", &kelima);

    mean = (kesatu + kedua + ketiga + keempat + kelima) / 5;

    printf("\nNilai rata-rata dari 5 angka di atas yaitu %.2f\n", mean);


    return 0;
}
