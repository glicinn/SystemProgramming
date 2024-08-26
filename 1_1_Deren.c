#include <stdio.h> 
#include <locale.h> 

int main(void) 
{ 
setlocale(LC_ALL, ""); 
int first, second, itog=0; 
printf("Введите первое число: ");
scanf("%d", &first); 
printf("Введите второе число: "); 
scanf("%d", &second); 
for (int i = 0; i < second; i++) 
{ 
itog += first; 
} 
printf("%d", itog); 
return 0; 
}