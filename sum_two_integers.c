#include <stdio.h>
int main(){
    int num1, num2, somme;
    //Demander à l'utilisateur de saisir deux entiers
    scanf("%d", &num1);
    scanf("%d", &num2);

    //calcul de la somme
    somme = num1 + num2;

    //affiche le resultat
    printf("La somme est : %d", somme);
    return 0;

}