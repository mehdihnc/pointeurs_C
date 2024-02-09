#include <stdio.h>

int main() {
    int valeur = 20;
    int *ptr_valeur = &valeur;

    printf("Avant modification:\n");
    printf("valeur = %d\n", valeur);

    // Modification de la valeur via le pointeur
    *ptr_valeur = 30;

    printf("Après modification:\n");
    printf("valeur = %d\n", valeur);

    return 0;
}


// Dans cet exemple, la variable valeur est modifiée en utilisant le pointeur ptr_valeur. Avant la modification, la valeur est 20. Après avoir modifié la valeur via le pointeur (avec *ptr_valeur = 30;), la nouvelle valeur de valeur est affichée, montrant qu'elle est maintenant 30.