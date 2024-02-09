#include <stdio.h>

int main() {
    int num = 77;
    int *ptr = &num;

    printf("Valeur originale de num: %d\n", num);

    // Modification de la valeur via le pointeur
    *ptr = 88;

    printf("Valeur modifiée de num: %d\n", num);

    return 0;
}


// La variable num et le pointeur ptr sont initialisés comme dans l'exercice précédent.
// *ptr = 88; modifie la valeur de num via le déréférencement. En plaçant *ptr sur le côté gauche d'une affectation, nous modifions la valeur à l'adresse mémoire pointée par ptr.
// L'affichage des valeurs avant et après la modification confirme que num a bien été modifié par l'intermédiaire du pointeur.
// Ces exercices illustrent la dualité du déréférencement : accéder en lecture à la valeur pointée et la modifier. Ils mettent en évidence l'importance de bien comprendre et manipuler les pointeurs pour interagir efficacement avec la mémoire en C.