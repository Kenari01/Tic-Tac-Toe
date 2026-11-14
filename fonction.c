#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void affiche_tab(char *tab)
{
    system("clear");
    printf(" %c | %c | %c \n", tab[0], tab[1], tab[2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tab[3], tab[4], tab[5]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", tab[6], tab[7], tab[8]);
}

void joueur(char *tab)
{
    int i;

    while (1)
    {
        printf("Choisissez où jouer : ");
       
        if (scanf("%d", &i) == 1)
        {
            
         if (i >= 0 && i <= 8)
        {
           
        if (tab[i] != 'X' && tab[i] != 'O')
        {

            tab[i] = 'X';
            
            return;

        }

        else
        {
            printf("Case déjà occupée.\n");
        }
            
        }

        else
        {
            printf("Veuillez choisir un nombre entre 0 et 8.\n");
        }

        }


    }

}

void bot(char *tab)
{
    int i = 0;

    while (i < 9)
    {
        if (tab[i] != 'X' && tab[i] != 'O')
        {
            tab[i] = 'O';
           
            return;
        }

        i = i + 1;
    }
}

char victoir(char *tab)
{
    int i = 0;

    while (i < 9)
    {
        if (tab[i] != ' ')
        {

        if (tab[i] == tab[i + 1])
        {

        if (tab[i + 1] == tab[i + 2])
        {
            return tab[i];
        }

        }

        }

        i = i + 3;
    }

    i = 0;
    while (i < 3)
    {
        if (tab[i] != ' ')
        {

        if (tab[i] == tab[i + 3])
        {
        
        if (tab[i + 3] == tab[i + 6])
        {
            return tab[i];
        }

        }

        }

        i = i + 1;
    }

    if (tab[0] != ' ')
    {
        if (tab[0] == tab[4])
        {

        if (tab[4] == tab[8])
        {
            return tab[0];
        }

        }

    }

    if (tab[2] != ' ')
    {
        if (tab[2] == tab[4])
        {

        if (tab[4] == tab[6])
        {
            return tab[2];
        }

        }

    }

    return ' ';
}

