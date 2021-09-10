#include <stdio.h>
#include <stdlib.h>

int main()
{
    float jariJari, luas;
    
    printf("==========================================\n\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menghitung Luas Lingkaran\n");
    printf("==========================================\n\n");
    
    printf("Masukan Jari-Jari Lingkaran dalam cm: ");
    scanf("%f", &jariJari);
    
    luas = 3.14 * (jariJari * jariJari );
    
    printf("\nLuas Lingkaran yaitu %.2f cm\n", luas);

    return 0;
}
