#include <stdio.h>

int main() {
    int entier = 5;
    float flottant = 10.5;
    char caractere = 'A';

    printf("Adresse de entier: %p\n", (void *)&entier);
    printf("Adresse de flottant: %p\n", (void *)&flottant);
    printf("Adresse de caractere: %p\n", (void *)&caractere);

    return 0;
}



// Ce programme affiche les adresses mémoire de trois variables de types différents. Les adresses peuvent varier à chaque exécution du programme et d'un système à l'autre. L'utilisation de (void *) est une bonne pratique pour la conversion de type lors de l'affichage des adresses mémoire avec %p.