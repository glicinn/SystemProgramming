#include <stdio.h>
#include <locale.h>
#include <string.h>
int main()
{
    int a = 0;
    int b = 0;
    int i;
    setlocale(LC_ALL, " ");
    char str[50];
    metka:
    printf("Игра Словодел\nПравила игры:\n-Игра для двух игроков\n-Необходимо составить слово из английских букв\n-Баллы за букву соответсвуют её номеру в алфавите\n-При отрыве, более чем в 20 очков, игрок побеждает");
    printf("Поехали!\nПервый игрок, твоё слово: ");
    scanf("%s", str, 50);
    char gletter1 = 'A';
    char letter1 = 'a';
    char gletter2 = 'B';
    char letter2 = 'b';
    char gletter3 = 'C';
    char letter3 = 'c';
    char gletter4 = 'D';
    char letter4 = 'd';
    char gletter5 = 'E';
    char letter5 = 'e';
    char gletter6 = 'F';
    char letter6 = 'f';
    char gletter7 = 'G';
    char letter7 = 'G';
    char gletter8 = 'H';
    char letter8 = 'h';
    char gletter9 = 'I';
    char letter9 = 'i';
    char gletter10 = 'J';
    char letter10 = 'j';
    char gletter11 = 'K';
    char letter11 = 'k';
    char gletter12 = 'L';
    char letter12 = 'l';
    char gletter13 = 'M';
    char letter13 = 'm';
    char gletter14 = 'N';
    char letter14 = 'n';
    char gletter15 = 'O';
    char letter15 = 'o';
    char gletter16 = 'P';
    char letter16 = 'p';
    char gletter17 = 'Q';
    char letter17 = 'q';
    char gletter18 = 'R';
    char letter18 = 'r';
    char gletter19 = 'S';
    char letter19= 's';
    char gletter20 = 'T';
    char letter20 = 't';
    char gletter21 = 'U';
    char letter21 = 'u';
    char gletter22 = 'V';
    char letter22= 'v';
    char gletter23 = 'W';
    char letter23 = 'w';
    char gletter24 = 'X';
    char letter24 = 'x';
    char gletter25 = 'Y';
    char letter25 = 'y';
    char gletter26 = 'Z';
    char letter26 = 'z';


    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter1 || str[i] == gletter1) a++;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter2 || str[i] == gletter2) a += 2;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter3 || str[i] == gletter3) a += 3;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter4 || str[i] == gletter4) a += 4;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter5 || str[i] == gletter5) a += 5;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter6 || str[i] == gletter6) a += 6;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter7 || str[i] == gletter7) a += 7;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter8 || str[i] == gletter8) a += 8;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter9 || str[i] == gletter9) a += 9;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter10 || str[i] == gletter10) a += 10;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter11 || str[i] == gletter11) a += 11;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter12 || str[i] == gletter12) a += 12;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter13 || str[i] == gletter13) a += 13;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter14 || str[i] == gletter14) a += 14;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter15 || str[i] == gletter15) a += 15;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter16 || str[i] == gletter16) a += 16;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter17 || str[i] == gletter17) a += 17;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter18 || str[i] == gletter18) a += 18;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter19 || str[i] == gletter19) a += 19;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter20 || str[i] == gletter20) a += 20;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter21 || str[i] == gletter21) a += 21;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter22 || str[i] == gletter22) a += 22;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter23 || str[i] == gletter23) a += 23;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter24 || str[i] == gletter24) a += 24;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter25 || str[i] == gletter25) a += 25;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == letter26 || str[i] == gletter26) a += 26;
    printf("Баллы, полученные за написанное слово: %d \n", a);

    char str2[50];
    printf("Второй игрок, твоё слово: ");
    scanf("%s", str2, 50);
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter1 || str2[i] == gletter1) b++;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter2 || str2[i] == gletter2) b += 2;
    for (i = 0; i < strlen(str); i++)
        if (str2[i] == letter3 || str2[i] == gletter3) b += 3;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter4 || str2[i] == gletter4) b += 4;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter5 || str2[i] == gletter5) b += 5;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter6 || str2[i] == gletter6) b += 6;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter7 || str2[i] == gletter7) b += 7;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter8 || str2[i] == gletter8) b += 8;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter9 || str2[i] == gletter9) b += 9;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter10 || str2[i] == gletter10) b += 10;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter11 || str2[i] == gletter11) b += 11;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter12 || str2[i] == gletter12) b += 12;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter13 || str2[i] == gletter13) b += 13;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter14 || str2[i] == gletter14) b += 14;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter15 || str2[i] == gletter15) b += 15;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter16 || str2[i] == gletter16) b += 16;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter17 || str2[i] == gletter17) b += 17;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter18 || str2[i] == gletter18) b += 18;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter19 || str2[i] == gletter19) b += 19;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter20 || str2[i] == gletter20) b += 20;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter21 || str2[i] == gletter21) b += 21;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter22 || str2[i] == gletter22) b += 22;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter23 || str2[i] == gletter23) b += 23;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter24 || str2[i] == gletter24) b += 24;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter25 || str2[i] == gletter25) b += 25;
    for (i = 0; i < strlen(str2); i++)
        if (str2[i] == letter26 || str2[i] == gletter26) b += 26;
    printf("Баллы, полученные за написанное слово: %d \n", b);
    if (a - b >= 20)
    {
        printf("Урааа! Победил чел под номером 1");
        
    }
    if (b - a >= 20)
    {
        printf("Урааа! Победил чел под номером 2");
    }
    else
    {
        goto metka;
    }
}