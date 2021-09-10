#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, pembagian;
    
    printf("==================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan membagi tiga bilangan (a / b / c)\n");
    printf("==================================================\n\n");
    
    printf("Masukan nilai a: ");
    scanf("%i", &a);
    
    printf("Masukan nilai b: ");
    scanf("%i", &b);

    printf("Masukan nilai b: ");
    scanf("%i", &c);
    
    pembagian = a / b / c;
    
    printf("\nHasil dari %i / %i / %i adalah %i\n\n", a, b, c, pembagian);

    return 0;
}
