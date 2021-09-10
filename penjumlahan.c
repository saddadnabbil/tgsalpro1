#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, penjumlahan;
    
    printf("==================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan menjumlahkan dua bilangan (a + b)\n");
    printf("==================================================\n\n");
    
    printf("Masukan nilai a: ");
    scanf("%i", &a);
    
    printf("Masukan nilai b: ");
    scanf("%i", &b);
    
    penjumlahan = a + b;
    
    printf("\nHasil %i ditambah %i adalah %i\n", a, b, penjumlahan);

    return 0;
}
