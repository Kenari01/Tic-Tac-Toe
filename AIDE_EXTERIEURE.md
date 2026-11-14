# Aide extérieure - Morpion (Tic-Tac-Toe)

**Fichier concerné :** `main.c`

**Bout de code concerné :**
```c
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

