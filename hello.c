#include <stdio.h>

int main() {
    float a, b, c;
    float objetosc;

    printf("Podaj dlugosc boku a: ");
    scanf("%f", &a);

    printf("Podaj dlugosc boku b: ");
    scanf("%f", &b);

    printf("Podaj dlugosc boku c: ");
    scanf("%f", &c);

    objetosc = a * b * c;

    printf("Objetosc prostopadloscianu wynosi: %.2f\n", objetosc);

    return 0;
}
