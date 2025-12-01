#include <stdio.h>

int main() {
    int compteur = 5;    

    for (int i = 1; i <= compteur; i++) {   // boucle des lignes
        for (int j = 1; j <= i; j++) {      // boucle des colonnes

            // Cas particuliers : première, deuxième et dernière ligne
            if (i == 1 || i == 2 || i == compteur) {
                printf("* ");
            }
            else {
                // Lignes du milieu :
                if (j == 1 || j == i)
                    printf("* "); // les bords sont des *
                else
                    printf("# "); // l'intérieur est rempli de #
            }
        }
        printf("\n"); // saut de ligne
    }

    return 0;
}

