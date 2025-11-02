# Program: Liczby podzielne przez k
Program napisany w języku C, który sprawdza liczby z zakresu od 50 do 100 podzielne przez liczbę k wprowadzoną przez użytkownika. 

---

## Informacje techniczne
- **Język:** C  
- **Edytor:** Microsoft Visual Studio Code  
- **Kompilator:** Clang (`clang -Wall`)  
- **System:** Windows  

> 💡 Program skompilowany przy użyciu kompilatora Clang. Korzystałem z edytora MS Visual Studio Code.

---

## Kompilacja
Aby skompilować program, w terminalu uruchom:

```bash
clang -Wall liczbyk.c
````
```
warning: 'scanf' is deprecated: This function or variable may be unsafe. Consider using scanf_s instead.
```

Jest to normalne w środowisku Visual Studio. Możesz je zignorować lub użyć `scanf_s`. Aby wyłączyć ostrzeżenie, dodaj na początku pliku:

```c
#define _CRT_SECURE_NO_WARNINGS
```

---
## Uruchomienie programu
Po kompilacji uruchom plik wykonywalny:

```bash
liczbyk.exe
```
Program poprosi o podanie liczby k i zwróci wynik:

---

### Przykłady działania

```
C:\Users\X\Desktop\homework>liczbyk.exe
Podaj liczbe k: 10
Wynik:
50
60
70
80
90
100
```
```
C:\Users\X\Desktop\homework>liczbyk.exe
Podaj liczbe k: 20
Wynik:
60
80
100
```

---

## Działanie programu

1. Program prosi użytkownika o podanie liczby k.
2. Program sprawdza czy liczba k jest dodatnia.
3. Następnia sprawdza liczby z zakresu od 50 do 100, które spełniają warunek, czyli są podzielne przez k.
4. Na końcu zwraca wynik.

---
## 👤 Autor

* **Imię / Pseudonim:** Piotr
* **Rok:** 2025
* **Środowisko:** Visual Studio Code + Clang

```
