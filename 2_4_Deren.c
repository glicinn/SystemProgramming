#include <stdio.h> 
#include <locale.h> 
void main() 
{ 
setlocale(LC_ALL, " "); 
int cidr; 
printf("Введите маску в формате CIDR \n"); 
scanf("%d", &cidr); 
if (cidr < 1 || cidr > 32) 
{ 
printf("Дядя, не надо так. Введи нормально, пжж"); 
} 
else 
{ 
int a = 128; 
int first = 0; 
int second = 0; 
int third = 0; 
int fourth = 0; 
for (int i = 0; i < cidr; i++) 
{ 
if (first < 255) 
{ 
first = first + a; 
if (a > 1) 
{ 
a = a / 2; 
} 
else a = 128; 
} 
else if (second < 255) 
{ 
second = second + a; 
if (a > 1) 
{ 
a = a / 2; 
} 
else a = 128; 
} 
else if (third < 255) 
{ 
third = third + a; 
if (a > 1) 
{ 
a = a / 2; 
} 
else a = 128; 
} 
else 
{ 
fourth = fourth + a; 
if (a > 1) 
{ 
a = a / 2; 
} 
else a = 128; 
} 
} 
printf("%d.%d.%d.%d", first, second, third, fourth); 
} 
}
