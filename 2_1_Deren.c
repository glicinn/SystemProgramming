#include <stdio.h> 
#include <locale.h> 
#include <math.h> 
convert(); 
int main(void) 
{ 
setlocale(LC_ALL, ""); 
long long chislo; 
printf("Введите восьмеричное число: "); 
scanf("%lld", &chislo); 
printf("%lld Восьмеричное = %d Десятичное: ", chislo, convert(chislo)); 
return 0; 
} 
int convert(long long chislo) { 
int a = 0, i = 0, b; 
while (chislo != 0) { 
b = chislo % 10; 
chislo /= 10; 
a += b * pow(2, i); 
i++; 
} 
return a; 
}
