#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    int array[1000];

    for(int j = 0; j < 5; j++)
    {
        int cetnost[10] = {0};
        int suma = 0;

        for(int i = 0; i < 1000; i++)
        {
            array[i] = rand() % 10;
            (int)cetnost[array[i]]++;
            suma += array[i];
        }

        for(int i = 0; i < 10; i++)
        {
            printf("Cetnost cisla %d: %d\n", i, cetnost[i]);
        }

        printf("Prumer: %f\n\n\n", (float)suma/1000);
    }

    // Druha cast
    int vysledek = 0;
    char input[8] = {0};

    printf("Zadejte binarni cislo (cislo + Enter):\n");
    int j = 0;
    while(j < 8)
    {
        scanf("%c\n", &input[j]);
        if(input[j] < 48 || input[j] > 49)
        {
            printf("Zadali jste cislo jine nez 0 nebo 1. Zkuste to znovu.\n");
        }
        else
        {
            input[j++] -= 48;
        }
    }

    printf("Nactene cislo: ");
    for(int j = 0; j < 8; j++)
    {
        printf("%d", input[j]);
    }
    printf("\n");

    for(int j = 7; j >= 0; j--)
    {
        vysledek += input[j] * pow(2, 7 - j);
    }

    printf("Vysledek: %d\n", vysledek);
}
