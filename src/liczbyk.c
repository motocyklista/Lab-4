#include <stdio.h>

int main(void) {

int k;
  
// Wczytanie liczby k od użytkownika

printf("Podaj liczbe k (wieksze od 0): ");
scanf("%d", &k);

// Sprawdzenie poprawności danych wejściowych

while (k <= 0) {
    printf("Blad: liczba musi byc wieksza od 0!\n");
    printf("Podaj liczbe (wieksze od 0):");
    scanf("%d", &k);
}

printf("Wynik: \n");

 // Sprawdź liczby od 50 do 100

for (int i = 50; i <= 100; i++){

    // Sprawdzenie, czy powyższe liczby są podzielne przez k

    if (i % k == 0)
    {
       printf("%d\n", i);
    }
}

  return 0;
}
