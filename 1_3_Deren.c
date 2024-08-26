#include <stdio.h> 
#include <locale.h> 
#include <math.h> 
int main(void) 
{ 
setlocale(LC_ALL, ""); 

char str[11]; 
printf("Введи, пожалуйста, какие-нибудь символы (без пробелов и чтоб содержали вопросительные знаки)"); 
for (int i = 0; i < 11; i++) 
{ 
scanf("\n%c", &str[i]); 
} 
for (int i = 0; i < 11; i++) 
{ 
if (str[i] == '?') str[i] = '!'; 
} 
for (int i = 0; i < 11; i++) 
{ 
printf("%c", str[i]); 
} 
return 0; 
}