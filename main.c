#include <stdio.h>
#include <stdlib.h>
void Qone()
{
    printf(" write the symbol which is infront of it\n");
    printf(" Q1 which funtion is use to take input in C language\n");
    printf(" Your options are\n");
    printf(" 1) scanf()\n");
    printf(" 2) printf()\n");
    printf(" 3) void()\n");
    printf(" 4) bool()\n");
}
int main()
{
    int a,q;

    printf(" HELO FRIENDS\n");
    printf(" Press 1 to start\n");
    printf(" Press 0 to exit\n");
    printf("Input= ");
    scanf("%d",&a);
    system("cls");
    printf("Input= %d\n",a);

    if (a == 0)
    {
        printf("EXIT");
        return 0;
    };
    Qone();
     printf(" Input: ");
    scanf("%d", &q);

    if(q == 1)
    {
        printf("Correct one");
    }
    else
    {
        printf("Correct option is 1");
        printf("wrong one");
    }
    return 0;
}