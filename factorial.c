#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;

    // Lecture du nombre
    scanf("%d", &n);

    // Vérification que le nombre est positif ou nul
    if (n < 0) {
        return 1; // Rien n'est affiché si le nombre est négatif
    }

    // Calcul du factoriel avec une boucle for
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    // Affichage uniquement du résultat final
    printf("Le factoriel de %d est : %llu\n", n, fact);

    return 0;
}
