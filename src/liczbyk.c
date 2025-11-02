#include <stdio.h>

int main(void) {

int k;

printf("Podaj liczbe k (wieksze od 0): ");
scanf("%d", &k);

while (k <= 0) {
    printf("Blad: liczba musi byc wieksza od 0!\n");
    printf("Podaj liczbe (wieksze od 0):");
    scanf("%d", &k);
}

printf("Wynik: \n");

for (int i = 50; i <= 100; i++){
    if (i % k == 0)
    {
       printf("%d\n", i);
    }
}

  return 0;
}
