#include <stdio.h> 
#include <locale.h> 
#include<math.h> 
int main(void) 
{ 
setlocale(LC_ALL, ""); 
int first, second, itog=1; 
printf("Введите нужное вам число: "); 
scanf("%d", &first); 
printf("Введите степень в которую вы хотите данное число возвести: "); 
scanf("%d", &second); 
itog = pow(first, second); 
printf("Получившееся число: %d", itog); 
return 0; 
}