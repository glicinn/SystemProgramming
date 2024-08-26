#include <stdio.h> 
#include <locale.h> 
pow(); 
int main(void) 
{ 
setlocale(LC_ALL, ""); 
int first, second, itog; 
int vibor; 
printf("Введите первое число: "); 
scanf("%d", &first); 
printf("Введите второе число: "); 
scanf("%d", &second); 
printf("Что вы хотите сделать с данными числами"); 
printf("\n1.Умножить"); 
printf("\n2.Разделить (Первое на второе)"); 
printf("\n3.Сложить"); 
printf("\n4.Вычесть (Из первого второе)"); 
printf("\n5.Возвести в степень\n"); 
scanf("%d", &vibor); 
switch (vibor) 
{ 
case 1: 
itog = first * second; 
printf("%d", itog); 
break; 
case 2: 
itog = first / second; 
printf("%f", (float)itog); 
break; 
case 3: 
itog = first + second; 
printf("%d", itog); 
break; 
case 4: 
itog = first - second; 
printf("%d", itog); 
break; 
case 5: 
itog = pow(first, second); 
printf("%d", itog); 
break; 
default: 
break; 
} 
return 0; 
} 
int pow(int x, int y) { 
if (y == 0) 
return 1; 
return (x * pow(x, y - 1)); 
}
