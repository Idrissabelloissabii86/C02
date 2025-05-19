#include <stdio.h>
int main() {
    // récupération de l'entier et opération
    int n;
    
    scanf("%d", &n);
    
    // verification de l'entier
        if (n / 2 && n % 2 == 0){
            printf("%d est un nombre pair.\n", n);
        }else{
            printf("%d est un nombre impair.\n", n);
        }
    return 0;
}
