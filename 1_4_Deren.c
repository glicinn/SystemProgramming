#include <stdio.h> 
#include <locale.h> 

int main(void) 
{ 
setlocale(LC_ALL, ""); 
int first, second, third; 
printf("Введите размер первого отрезка: "); 
scanf("%d",&first); 
printf("Введите размер второго отрезка: "); 
scanf("%d", &second); 
printf("Введите размер третьего отрезка: "); 
scanf("%d", &third); 
if (first + second > third && first + third > second && third + second > first) { 
printf("\nТреугольник будеть"); 
} 
else 
{ 
printf("\nТреугольника не будеть"); 
} 
if (first = second = third) { 
printf("\nОн - равнобедренный"); 
} 
else { 
printf("\nОн - прямоугольный"); 
} 
return 0; 
}