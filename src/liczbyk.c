#include <stdio.h>

int main(void) {

int k;

printf("Podaj liczbe k: ");
scanf("%d", &k);

printf("Wynik: \n");

for (int i = 50; i <= 100; i++){
    if (i % k == 0)
    {
       printf("%d\n", i);
    }
}

  return 0;
}
