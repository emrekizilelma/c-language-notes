#include <stdio.h>
#define PI 3.14

int main (int argc, char *argv[]) {

    int yaricap = 0;
    float cevre = 0;

    printf ("\nYariçapi giriniz: ");
    scanf  ("%d", &yaricap);

    cevre = 2 * PI * yaricap;

    printf ("Dairenin çevresi:%.2f\n", cevre);

    return 0;

    // Preprocess yani ön işleme sonrasını görmek için 'gcc -E program.c' şeklinde komut yazmamız gerekir.

}