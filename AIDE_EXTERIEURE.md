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
```
**IA utilisée :** `Gemini`

**Explication :** `L'IA m'a aidé à structurer la condition de maintien de la boucle principale et à comprendre comment alterner proprement les tours entre le joueur et l'ordinateur tout en vérifiant la condition de victoire à chaque passage.`
