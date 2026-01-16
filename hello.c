#include <stdio.h>

#define PI 3.14159265359

int main() {
    int wybor;
    float a, b, c;
    float r;
    float ap, h;
    float objetosc;

    printf("===== MENU =====\n");
    printf("1. Oblicz objetosc prostopadloscianu\n");
    printf("2. Oblicz objetosc kuli\n");
    printf("3. Oblicz objetosc ostroslupa prawidlowego czworokatnego\n");
    printf("Wybierz opcje (1, 2 lub 3): ");
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
            printf("\nObjetosc prostopadloscianu: %.2f\n", objetosc);
            break;

        case 2:

            printf("\nPodaj promien kuli: ");
            scanf("%f", &r);

            objetosc = (4.0 / 3.0) * PI * r * r * r;
            printf("\nObjetosc kuli: %.2f\n", objetosc);
            break;

        case 3:

            printf("\nPodaj dlugosc boku podstawy a: ");
            scanf("%f", &ap);

            printf("Podaj wysokosc ostroslupa h: ");
            scanf("%f", &h);

            objetosc = (1.0 / 3.0) * ap * ap * h;
            printf("\nObjetosc ostroslupa prawidlowego czworokatnego: %.2f\n", objetosc);
            break;

        default:
            printf("\nBlad! Nieprawidlowy wybor.\n");
    }

    return 0;
}

