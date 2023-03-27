#include <stdio.h>
#include "Mode.h"

int main(int argc, char **argv)
{
    int choix_mode;

    printf("Bienvenue dans le jeu Shifoumis\n");
    printf("Choisissez le mode de jeu que desirer :\n");
    printf("    1 - Humain vs Bot\n");
    printf("    2 - Bot vs Bot\n");

    scanf("%d", &choix_mode);

    if (choix_mode == 1)
    {
        player_vs_bot();
    }
    else if (choix_mode == 2)
    {
        bot_vs_bot();
    }

    return 0;
}
