#include <stdio.h> 
#include <locale.h> 
#include <math.h> 
int main(void) 
{ 
setlocale(LC_ALL, ""); 
int first = 0; 
int second = 0; 
int third = 0; 
int fourth = 0; 
printf("Введите первый октет: "); 
scanf("%d", &first); 
printf("Введите второй октет: "); 
scanf("%d", &second); 
printf("Введите третий октет: "); 
scanf("%d", &third); 
printf("Введите четвертый октет: "); 
scanf("%d", &fourth); 
printf("%d.%d.%d.%d", first, second, third, fourth); 
if (first >= 0 && first <= 127) 
{ 
printf("\nЭто сеть класса А\nПодходящая маска подсети: 255.0.0.0"); 
} 
else if (first >= 128 && first <= 191) 
{ 
printf("\nЭто сеть класса B\nПодходящая маска подсети: 255.255.0.0"); 
} 
else if (first >= 192 && first <= 223) 
{ 
printf("\nЭто сеть класса С\nПодходящая маска подсети: 255.255.255.0"); 
} 
else if (first >= 128 && first <= 191) 
{ 
printf("\nЭто сеть класса D\nПодходящая маска подсети: -"); 
} 
else if (first >= 128 && first <= 191) 
{ 
printf("\nЭто сеть класса E\nПодходящая маска подсети: -"); 
} 
return 0; 
}