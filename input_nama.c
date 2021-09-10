#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[100];
    
    printf("====================================\n");
    printf("Selamat datang\n");
    printf("Disini Kita akan nampilkan nama anda \n");
    printf("====================================\n\n");

    printf("Masukan nama anda: ");
    gets(nama);

    printf("\nHalo, %s!\n", nama);


    return 0;
}
