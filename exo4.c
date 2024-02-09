#include <stdio.h>

int main() {
    int x = 10, y = 20;
    int *ptrX = &x, *ptrY = &y;
    int *tempPtr;

    // Échange des adresses dans ptrX et ptrY
    tempPtr = ptrX;
    ptrX = ptrY;
    ptrY = tempPtr;

    printf("Valeur via ptrX (devrait être 20): %d\n", *ptrX);
    printf("Valeur via ptrY (devrait être 10): %d\n", *ptrY);

    return 0;
}



// Initialisation des Variables et des Pointeurs:

// x et y sont des variables entières initialisées à 10 et 20, respectivement.
// ptrX et ptrY sont des pointeurs sur int, initialisés pour pointer respectivement vers x et y. Cela est fait via l'opérateur &, qui obtient l'adresse de x et y.
// Échange des Adresses:

// Un pointeur temporaire tempPtr est utilisé pour stocker temporairement l'adresse contenue dans ptrX.
// Ensuite, l'adresse contenue dans ptrY est assignée à ptrX, ce qui fait maintenant pointer ptrX vers y.
// Finalement, l'adresse stockée dans tempPtr (l'adresse originale de x) est assignée à ptrY, faisant pointer ptrY vers x.
// Important: Cet échange modifie où pointent les pointeurs, mais ne change pas les valeurs des variables x et y.
// Affichage des Valeurs via Pointeurs:

// Les instructions printf affichent les valeurs pointées par ptrX et ptrY après l'échange. *ptrX déréférence ptrX pour accéder à la valeur de y, et *ptrY déréférence ptrY pour accéder à la valeur de x.
// L'échange des adresses dans les pointeurs permet de modifier l'accès aux valeurs sans modifier les valeurs elles-mêmes.