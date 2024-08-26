#include <stdio.h>  
#include <string.h>  
  
void perevorot(char *str)  
{  
    static int i, len, temp;  
    len = strlen(str); 
      
    if (i < len/2){  
        temp = str[i];  
        str[i] = str[len - i - 1];  
        str[len - i - 1] = temp;  
        i++;  
        perevorot(str); 
    }  
} 
      
    int main()  
    {  
        char str[50]; 
        printf (" Enter the string: ");  
        gets(str); 
        printf (" \n Before reversing the string: %s \n", str);
        perevorot(str);  
        printf (" After reversing the string: %s \n", str);  
    }