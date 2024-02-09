#include <stdio.h>

int main() {
    float *ptr1 = NULL;
    float f = 5.5;

    ptr1 = &f;

    printf("Adresse contenue dans ptr1: %p\n", (void *)ptr1);
    printf("Valeur pointée par ptr1: %.2f\n", *ptr1);

    return 0;
}



// Déclaration et Initialisation de Pointeur à NULL:

// float *ptr1 = NULL; déclare un pointeur ptr1 sur un float et l'initialise à NULL. L'initialisation à NULL est une bonne pratique pour éviter que le pointeur ne pointe vers une adresse aléatoire, potentiellement non valide.
// Déclaration et Initialisation de Variable Float:

// float f = 5.5; crée une variable f de type float avec la valeur 5.5. Cette variable sera la cible de notre pointeur.
// Affectation de l'Adresse:

// ptr1 = &f; affecte l'adresse de la variable f au pointeur ptr1. Maintenant, ptr1 "pointe" vers f, c'est-à-dire qu'il contient l'adresse mémoire où f est stocké.
// Affichage de l'Adresse et de la Valeur Pointée:

// La première instruction printf affiche l'adresse mémoire contenue dans ptr1. L'utilisation de (void *) assure que l'adresse est affichée correctement quel que soit l'environnement.
// La seconde instruction printf utilise le déréférencement *ptr1 pour accéder à la valeur de f à travers le pointeur et l'affiche.