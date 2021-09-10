#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float a, b, perpangkatan;
    
    printf("================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan memangkatkan dua bilangan (a^b)\n");
    printf("================================================\n\n");
    
    printf("Masukan nilai a: ");
    scanf("%f", &a);
    
    printf("Masukan nilai b: ");
    scanf("%f", &b);
    
    perpangkatan = pow(a,b);
    
    printf("\nHasil dari %.2f pangkat %.2f adalah %.2f\n", a, b, perpangkatan);

    return 0;
}
