#include <stdio.h> 
#define lg 100 // Константа, равная 100 (Массив символов)

int dlina(char a[]) // Проверка длины массива
{ 
int itog = 0; 
for (int i = 0; a[i] != NULL && i < lg; i++) 
{ 
itog++; 
} 
return itog; 
} 
int summa(char b[]) 
{ 
int a = 0; 
int c; 
for (int i = 0; i < dlina(b); i++) 
{ 
c = b[i]; 
a += c; 
} 
return a; 
} 

void Shifr_Soobshenie(char Soobshenie[], char Shifr[]) // Функция шифрования
{ 
int a = summa(Shifr); 
a = dlina(Soobshenie); 
a /= 65; 
for (int i = 0; i < dlina(Soobshenie);i++) 
{ 
char g = Soobshenie[i] + i + a; 
Soobshenie[i] = g; 
} 
printf("%s\n", Soobshenie); 
} 

void Deshifr_Soobshenie(char Soobshenie[], char Shifr[]) //Функция дешифрования
{ 
int a = summa(Shifr); 
a = dlina(Soobshenie); 
a /= 65; 
for (int i = 0; i < dlina(Soobshenie);i++) 
{ 
char g = Soobshenie[i] - i - a; 
Soobshenie[i] = g; 
} 
printf("%s\n", Soobshenie); 
} 

int main(void) // Ввод данных и само шифрование
{ 
char stroka[lg]; 
printf("Soobshenie:\n"); 
scanf("%s", stroka); 
char slovo[5]; // Константа, равная 5 (Слово-ключ)
printf("Shifruushee slovo:\n"); 
scanf("%s", slovo); 
int deistvie; // Выбор действия (Шифровка / Дешифровка)
printf("Chto vi hotite sdelat'?:\n 1. zashifrovat'\n 2. deshifrovat'\n");
scanf("%d", &deistvie); 
if (deistvie == 1) Shifr_Soobshenie(stroka, slovo); 
else if (deistvie == 2) Deshifr_Soobshenie(stroka, slovo); 
else printf("Oshibka"); 
return 0; 
}