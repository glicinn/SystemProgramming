#include <stdio.h> 
#include <locale.h> 

int main(void) 
{ 
setlocale(LC_ALL, ""); 
int arr[10]; 
int i; 
int chet=0, nechet=0; 
printf("Введите, пожалуйста, 10 чисел:\n"); 
for (i = 0; i < 10; i++) 
{ 
printf("a[%d] = ", i); 
scanf("%d", &arr[i]); 
} 
printf("Получившийся массив: \n"); 
for (i = 0; i < 10; i++) 
printf("%d\t", arr[i]); 

for (i = 0; i < 10; i++) { 
if (i%2 == 0) { 
chet++; 
} 
else { 
nechet++; 
} 
} 
printf("\nЧетные числа: %d", chet); 
printf("\nНечетные числа: %d", nechet); 
return 0; 
}