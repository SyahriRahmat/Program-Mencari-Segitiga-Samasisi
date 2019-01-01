#include <stdio.h>
#include <conio.h>

int main ()
{
    int a,b,c;

    printf("PROGRAM UNTUK MENGETAHUI SEBUAH SEGITIGA SAMA SISI ATAU BUKAN .\n");
    printf("===============================================================\n");
    printf("SILAHKAN MASUKKAN PANJANG SISI A = " ); scanf ("%i",&a);
    printf("SILAHKAN MASUKKAN PANJANG SISI B = " ); scanf ("%i",&b);
    printf("SILAHKAN MASUKKAN PANJANG SISI C = " ); scanf ("%i",&c);
    if (a==b && b==c && c==a)
        printf ("MAKA SEGITIGA TERSEBUT ADALAH == SEGITIGA SAMA SISI ");
    else
    {
        printf ("MAKA SEGITIGA TERSEBUT ADALAH == BUKAN SEGITIGA SAMA SISI");
    }
getch ();
}
