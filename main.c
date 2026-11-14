#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "fonction.h"



int main()
{
    char tab[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char win = ' ';
    int tours = 0;
    

    while (win == ' ' && tours < 9)
    {
         affiche_tab(tab);

        if (tours % 2 == 0)

            joueur(tab);

        else

        {
            bot(tab);
        }

        win = victoir(tab);

        tours = tours + 1;

    }


    affiche_tab(tab);
    
    if (win == 'X')
    {
        printf("Vous avez gagné !\n");
    }
    
    else if (win == 'O')
    {
        printf("L'ordinateur a gagné !\n");
    }

    else
    {
        printf("Match nul !\n");
    }


    

    return 0;
}