#include <stdio.h>
#include <stdlib.h>

int main()
{
    float panjang, lebar, luas;
    
    printf("================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung Luas Persegi Panjang\n");
    printf("================================================\n\n");
    
    printf("Masukan Panjang Persegi dalam cm: ");
    scanf("%f", &panjang);
    
    printf("Masukan Lebar Persegi dalam cm: ");
    scanf("%f", &lebar);
    
    luas = panjang * lebar;
    
    printf("\nLuas Persegi Panjang yaitu %.2f cm\n", luas);

    return 0;
}
