#include <stdio.h>

#define PI 3.14159265359

int main() {
    int wybor;
    float a, b, c;
    float r;
    float objetosc;

    printf("===== MENU =====\n");
    printf("1. Oblicz objetosc prostopadloscianu\n");
    printf("2. Oblicz objetosc kuli\n");
    printf("Wybierz opcje (1 lub 2): ");
    scanf("%d", &wybor);

    switch (wybor) {
        case 1:
            printf("\nPodaj dlugosc boku a: ");
            scanf("%f", &a);

            printf("Podaj dlugosc boku b: ");
            scanf("%f", &b);

            printf("Podaj dlugosc boku c: ");
            scanf("%f", &c);

            objetosc = a * b * c;
            printf("\nObjetosc prostopadloscianu wynosi: %.2f\n", objetosc);
            break;

        case 2:
            printf("\nPodaj promien kuli: ");
            scanf("%f", &r);

            objetosc = (4.0 / 3.0) * PI * r * r * r;
            printf("\nObjetosc kuli wynosi: %.2f\n", objetosc);
            break;

        default:
            printf("\nBlad! Nieprawidlowy wybor.\n");
    }

    return 0;
}

