#include <stdio.h>

int main() {
    int n;
    int quotient, reste;
    
    // Lire un entier
    scanf("%d", &n);
    
    // Division entière par 2
    quotient = n / 2;
    reste = n % 2;
    
    // Vérification du modulo
    if (reste == 0)
        printf("%d est un nombre pair.\n", n);
    else
        printf("%d est un nombre impair.\n", n);
    return 0;
}
