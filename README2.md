# Program: Prosty kalendarz miesiąca
Program napisany w języku C, który drukuje prosty kalendarz miesiąca w układzie tygodniowym.

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
clang -Wall kalendarz.c
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
kalendarz.exe
```
Program poprosi o podanie liczby dni a następnie poprosi o podanie dnia startowego.

---

### Przykłady działania

```
C:\Users\X\Desktop\homework>kalendarz.exe
Podaj liczbe dni: 30
Podaj dzien startowy (1-7): 2
      1   2   3   4   5   6
  7   8   9  10  11  12  13
 14  15  16  17  18  19  20
 21  22  23  24  25  26  27
 28  29  30
```
```
C:\Users\X\Desktop\homework>kalendarz.exe
Podaj liczbe dni: 28
Podaj dzien startowy (1-7): 7
                          1
  2   3   4   5   6   7   8
  9  10  11  12  13  14  15
 16  17  18  19  20  21  22
 23  24  25  26  27  28
```

---

## Działanie programu

1. Program prosi użytkownika o podanie liczby dni w miesiącu (np. 30)
2. Program prosi o podanie dnia tygodnia od którego zaczyna się miesiąc (1- Niedziela, 7 - Sobota)
3. Program stwarza puste miejsca przed pierwszym dniem miesiąca.
4. Następuje wydrukowanie dni miesiąca i wyrównanie kolumn.
5. Kalendarz gotowy.


---
## 👤 Autor

* **Imię / Pseudonim:** Piotr
* **Rok:** 2025
* **Środowisko:** Visual Studio Code + Clang

```
