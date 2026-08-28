#include <stdio.h>
#include <stdlib.h> 
int a, q, w, e, r;
void line()
{
    printf("\n------------------------------------------------------------------------------------\n");
}
void Qone()
{
    
    printf(" write the symbol which is infront of it\n");
    printf(" Q1 which funtion is use to take input in C language\n");
    printf(" Your options are\n");
    printf(" 1) scanf()\n");
    printf(" 2) printf()\n");
    printf(" 3) void()\n");
    printf(" 4) bool()\n");
    printf(" Input: ");
    scanf("%d", &q);
    system("cls");
    if (q == 1)
    {
        printf("\nANS 1 = Correct one\n");
    }
    else
    {

        printf("ANS 1 = wrong one\n");
        printf(" Correct option is 1\n");
    }
}
void Qtwo()
{
    
    printf(" Q2 symbol use in the end of statement in c\n");
    printf(" Your options are\n");
    printf(" 1) , \n");
    printf(" 2) : \n");
    printf(" 3) ; \n");
    printf(" 4) . \n");
    printf(" Input: ");
    scanf("%d", &w);
    system("cls");
    if (w == 3)
    {
        printf("ANS 2 = Correct one\n");
    }
    else
    {

        printf("ANS 2 = wrong one\n");
        printf(" Correct option is 3\n");
    }
}
void Qthree()
{
 
    printf(" Q3 which of the data type use to store a decimal number\n");
    printf(" Your options are\n");
    printf(" 1) int \n");
    printf(" 2) char \n");
    printf(" 3) bool \n");
    printf(" 4) float \n");
    printf(" Input: ");
    scanf("%d", &e);
    system("cls");
    if (e == 4)
    {
        printf("ANS 3 = Correct one\n");
    }
    else
    {

        printf("ANS 3 = wrong one\n");
        printf(" Correct option is 4\n");
    }
}
void Qfour()
{
    
    printf(" Q4 d represent in scanf()\n");
    printf(" Your options are\n");
    printf(" 1) character \n");
    printf(" 2) integer \n");
    printf(" 3) float \n");
    printf(" 4) string \n");
    printf(" Input: ");
    scanf("%d", &r);
    system("cls");
    if (r == 2)
    {
        printf("ANS 4 = Correct one\n");
    }
    else
    {

        printf("ANS 4 = wrong one\n");
        printf(" Correct option is 2\n");
    }
}
void answer()
{

    
    system("cls");
    printf("-----------FINAL LIST------------\n");
    if (q == 1)
    {
        printf(" ANS 1 = Correct one\n");
    }
    else
    {

        printf("ANS 1 = wrong one\n");
        printf(" Correct option is 1\n");
    }
    line();
    if (w == 3)
    {
        printf("ANS 2 = Correct one\n");
    }
    else
    {

        printf("ANS 2 = wrong one\n");
        printf(" Correct option is 3\n");
    }
    line();
    if (e == 4)
    {
        printf("ANS 3 = Correct one\n");
    }
    else
    {

        printf("ANS 3 = wrong one\n");
        printf(" Correct option is 4\n");
    }
    line();
    if (r == 2)
    {
        printf("ANS 4 = Correct one\n");
    }
    else
    {

        printf("ANS 4 = wrong one\n");
        printf(" Correct option is 3\n");
    }
    line();
    printf("\n                  HOPE YOU LIKE THIS ONE             \n");
    line();
}
int main()
{
   

    printf(" HELO FRIENDS\n");
    printf(" Press 1 to start\n");
    printf(" Press 0 to exit\n");
    printf("Input= ");
    scanf("%d", &a);
    system("cls");
    printf("Input= %d\n", a);

    if (a == 0)
    {
        printf("EXIT");
        line();
        return 0;
    };
    line();
    Qone();
    line();
    Qtwo();
    line();
    Qthree();
    line();
    Qfour();
    line();
    answer();
    return 0;
}