#include <stdio.h>

int main(int argc, char **argv)
{
    int choix_mode;

    printf("Bienvenue dans le jeu Shifoumis\n");
    printf("Choisissez le mode de jeu que désirer :\n");
    printf("    1 - Humain vs Bot\n");
    printf("    2 - Bot vs Bot\n");

    scanf("%d", &choix_mode);

    if (choix_mode == 1)
    {
        printf("Ratio\n");
    }
    else if (choix_mode == 2)
    {
        printf("Yolo\n");
    }

    return 0;
}