#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Mode.h"

// joueur contre bot
void player_vs_bot(void)
{
	// entrer le nom du joueur
	char nom_joueur[50];
	
	printf("\n");

	printf("Entrer votre nom : ");
	scanf("%s", nom_joueur);

	// nombre de round du shifoumis
	int round;

	printf("Choisissez le nombre de round que vous voulez jouer : ");
	scanf("%d", &round);
	printf("\n");

	// Points du bot et du joueur
	int point_bot = 0;
	int point_joueur = 0;	

	// affichage des possibilités du joueur
	printf("Bienvenue sur le mode de jeu player vs bot \n");
	printf("Action du jeu : \n");
	printf("	1 - Pierre \n");
	printf("	2 - Feuille \n");
	printf("	3 - Ciseaux \n");

	// game loop
	while (round != 0)
	{	
		// demande du choix du joueur
		int player_choix;
		scanf("%d", &player_choix);

		// choix du bot
		srand(time(NULL));
		int bot_choix = 1 - rand() % (3 - 1);

		// vérification de l'action réalisée
		printf("\n");

		if (player_choix == 1) {printf("Vous avez choisis la pierre\n");}
		else if (player_choix == 2) {printf("Vous avez choisis la feuille\n");}
		else if (player_choix == 3) {printf("Vous avez choisis les ciseaux\n");}

		if (bot_choix == 1) {printf("Le bot a choisis la pierre\n");}
		else if (bot_choix == 2) {printf("Le bot a choisis la feuille\n");}
		else if (bot_choix == 3) {printf("Le bot a choisis les ciseaux\n");}
		
		printf("\n");

		// vérification du joueur gagnant le point
		/* 1 = pierre
		 * 2 = feuille
		 * 3 = ciseaux*/
		// Joueur gagne un point
		if (player_choix == 1 && bot_choix == 3)
		{
			printf("%s gagne 1 point\n", nom_joueur);
			point_joueur += 1;	
		}
		else if (player_choix == 2 && bot_choix == 1)
		{
			printf("%s gagne 1 point\n", nom_joueur);
			point_joueur += 1;
		}
		else if (player_choix == 3 && bot_choix == 2)
		{
			printf("%s gagne 1 point\n", nom_joueur);
			point_joueur += 1;
		}

		// bot gagne un point
		if (bot_choix == 1 && player_choix == 3)
		{
			printf("Le bot gagne 1 point\n");
			point_bot += 1;
		}
		else if (bot_choix == 2 && player_choix == 1)
		{
			printf("Le bot gagne 1 point\n");
			point_bot += 1;
		}
		else if (bot_choix == 3 && player_choix == 2)
		{
			printf("Le bot gagne 1 point\n");
			point_bot += 1;
		}

		// égalité
		if (player_choix == bot_choix) {printf("Egalite\n");}
		
		printf("\n");

		// nombre de round restant
		round -= 1;
		printf("Il reste %d round\n", round);

		printf("\n");
	}
	
	// vérification de qui a gagné
	if (point_joueur > point_bot) {printf("%s a gagne\n", nom_joueur);}
	else if (point_joueur == point_bot) {printf("Egalite");}
	else {printf("Le bot a gagne");}
}

// bot contre bot
void bot_vs_bot(void)
{
	// nombre de round du shifoumis
	int round;

	printf("Choisissez le nombre de round que vous voulez jouer : ");
	scanf("%d", &round);
	printf("\n");

	// Points des deux bots
	int point_bot_un = 0;
	int point_bot_deux = 0;	

	// affichage des possibilités du joueur
	printf("Bienvenue sur le mode de jeu player vs bot \n");
	printf("Action du jeu : \n");
	printf("	1 - Pierre \n");
	printf("	2 - Feuille \n");
	printf("	3 - Ciseaux \n");

	// game loop
	while (round != 0)
	{	
		//// choix des bot ////
		srand(time(NULL));
		// choix du bot un
		int bot_choix_un = 1 - rand() % (3 - 1);

		// choix du bot deux
		int bot_choix_deux = 1 - rand() % (3 - 1);

		// vérification de l'action réalisée
		printf("\n");

		if (bot_choix_un == 1) {printf("Vous avez choisis la pierre\n");}
		else if (bot_choix_un == 2) {printf("Vous avez choisis la feuille\n");}
		else if (bot_choix_un == 3) {printf("Vous avez choisis les ciseaux\n");}

		if (bot_choix_deux == 1) {printf("Le bot a choisis la pierre\n");}
		else if (bot_choix_deux == 2) {printf("Le bot a choisis la feuille\n");}
		else if (bot_choix_deux == 3) {printf("Le bot a choisis les ciseaux\n");}
		
		printf("\n");

		// vérification du joueur gagnant le point
		/* 1 = pierre
		 * 2 = feuille
		 * 3 = ciseaux*/
		// Joueur gagne un point
		if (bot_choix_un == 1 && bot_choix_deux == 3)
		{
			printf("Bot 1 gagne 1 point");
			point_bot_un += 1;	
		}
		else if (bot_choix_un == 2 && bot_choix_deux == 1)
		{
			printf("Bot 1 gagne 1 point");
			point_bot_un += 1;
		}
		else if (bot_choix_un == 3 && bot_choix_deux == 2)
		{
			printf("Bot 1 gagne 1 point");
			point_bot_un += 1;
		}

		// bot gagne un point
		if (bot_choix_deux == 1 && bot_choix_un == 3)
		{
			printf("Bot 2 gagne 1 point\n");
			point_bot_deux += 1;
		}
		else if (bot_choix_deux == 2 && bot_choix_un == 1)
		{
			printf("Bot 2 gagne 1 point\n");
			point_bot_deux += 1;
		}
		else if (bot_choix_deux == 3 && bot_choix_un == 2)
		{
			printf("Bot 2 gagne 1 point\n");
			point_bot_deux += 1;
		}

		// égalité
		if (bot_choix_un == bot_choix_deux) {printf("Egalite\n");}
		
		printf("\n");

		// nombre de round restant
		round -= 1;
		printf("Il reste %d round\n", round);

		printf("\n");
	}
	
	// vérification de qui a gagné
	if (point_bot_un > point_bot_deux) {printf("Bot 1 a gagne");}
	else if (point_bot_un == point_bot_deux) {printf("Egalite");}
	else {printf("Bot 2 a gagne");}
}
