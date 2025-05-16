#include <stdio.h>

int main() {
    int a, b;

    // Lecture des deux nombres
    scanf("%d %d", &a, &b);

    // Inversion sans variable temporaire (utilisation d'opérations arithmétiques)
    a = a + b;
    b = a - b;
    a = a - b;

    // Affichage après échange
    printf("Après échange: a = %d, b = %d\n", a, b);

    return 0;
}
