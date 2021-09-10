#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tahunMenjabat, satuPeriode;
    char pemimpin[100];
    
    printf("===============================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita menghitung selesainya satu periode seorang pemimpin\n");
    printf("===============================================================\n\n");
    
    printf("Masukan nama pemimpinnya: ");
    gets(pemimpin);
    
    printf("Masukan tahun berapa pak %s saat menjabat: ", pemimpin);
    scanf("%i", &tahunMenjabat);
    
    satuPeriode = tahunMenjabat + 5;
    
    printf("\ntahun %i akan habis masa satu periodenya pak %s \n", satuPeriode, pemimpin);

    return 0;
}