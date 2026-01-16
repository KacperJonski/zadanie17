#include <stdio.h>

#define PI 3.14159265359

int main() {
    float a, b, c;
    float r;
    float objetosc_prostopadloscianu;
    float objetosc_kuli;


    printf("Podaj dlugosc boku a prostopadloscianu: ");
    scanf("%f", &a);

    printf("Podaj dlugosc boku b prostopadloscianu: ");
    scanf("%f", &b);

    printf("Podaj dlugosc boku c prostopadloscianu: ");
    scanf("%f", &c);

    objetosc_prostopadloscianu = a * b * c;
    printf("\nObjetosc prostopadloscianu: %.2f\n", objetosc_prostopadloscianu);

    printf("\nPodaj promien kuli: ");
    scanf("%f", &r);

    objetosc_kuli = (4.0 / 3.0) * PI * r * r * r;



    printf("Objetosc kuli: %.2f\n", objetosc_kuli);

    return 0;
}
