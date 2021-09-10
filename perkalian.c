#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, perkalian;
    
    printf("================================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan mengalikan dua bilangan (a * b)\n");
    printf("================================================\n\n");
    
    printf("Masukan nilai a: ");
    scanf("%i", &a);
    
    printf("Masukan nilai b: ");
    scanf("%i", &b);
    
    perkalian = a * b;
    
    printf("\nHasil dari %i dikali %i adalah %i\n", a, b, perkalian);

    return 0;
}
