#include <stdio.h>
#include <locale.h>

int main() {
    // Active le support des caractères locaux (ex : é, è)
    setlocale(LC_ALL, "");
    int a, b;

    // Lecture des deux nombres
    scanf("%d %d", &a, &b);

    // Inversion sans variable temporaire (utilisation d'opérations arithmétiques)
    a = a + b;
    b = a - b;
    a = a - b;

    // Affichage après échange
    printf("Après échange: a = %d, b = %d", a, b);

    return 0;
}
