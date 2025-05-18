#include <stdio.h>
int main(){
    // récupération de la valeur
    int a;       
    scanf("%d", &a);
    // condition de vérificationn du nombre (pair ou impair)
    if (a % 2 != 0){
        printf("%d est un nombre impair.\n", a);
    }
return 0;
}
