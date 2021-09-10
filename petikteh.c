#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jumlah, upah;
    
    printf("==============================================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung upah pemetik daun teh dimana per kg yaitu Rp 2.000\n");
    printf("==============================================================================\n\n");
    
    printf("Jumlah daun teh dalam kg: ");
    scanf("%f", &jumlah);

    
    upah = jumlah * 2.000;
    
    printf("\nUpah yang harus diterima adalah Rp%.3f\n", upah);

    return 0;
}
