#include <stdio.h>

int main(void) {
    int dni, tydzien;

    // Wczytaj dane od użytkownika
    printf("Podaj liczbe dni: ");
    scanf("%d", &dni);

    printf("Podaj dzien startowy (1-7): ");
    scanf("%d", &tydzien);

    // Stwórz puste miejsca przed pierwszym dniem miesiąca
    for (int i = 1; i < tydzien; i++) {
        printf("    "); // 4 spacje na pusty dzień
    }

    // Wydrukuj dni miesiąca
    for (int dzien = 1; dzien <= dni; dzien++) {
        printf("%3d ", dzien); // wyrównanie kolumn do 3 znaków

        // Przejdź do nowego wiersza po sobocie
        if ((dzien + tydzien - 1) % 7 == 0) {
            printf("\n");
        }
    }


    return 0;
}
