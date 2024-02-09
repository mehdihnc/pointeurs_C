#include <stdio.h>

int main() {
    int num = 77;
    int *ptr = &num;

    printf("La valeur de num via déréférencement: %d\n", *ptr);

    return 0;
}



// La variable num est initialisée à 77.
// Un pointeur ptr est déclaré et initialisé pour pointer vers num.
// L'utilisation de *ptr dans printf permet de lire et d'afficher la valeur de num sans y accéder directement. Le déréférencement ici sert à accéder en lecture à la valeur pointée.