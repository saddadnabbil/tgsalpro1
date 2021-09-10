#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jarak, kecepatan, waktu;
    
    printf("===================================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung waktu tempuh untuk menuju sebuah tujuan\n");
    printf("===================================================================\n\n");
    
    printf("Masukan jarak tempuh menuju tujuan anda dalam km: ");
    scanf("%f", &jarak);
    
    printf("Masukan kecepatan rata-rata menuju tujuan anda dalam km/jam: ");
    scanf("%f", &kecepatan);
    
    waktu = jarak / kecepatan * 60;
    
    printf("\nWaktu tempuh anda menuju tujuan yaitu %.2f menit\n", waktu);

    return 0;
}
