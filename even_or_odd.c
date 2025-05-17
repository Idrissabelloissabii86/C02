#include <stdio.h>
int main(){
    int n;
    // lire l'entier
    scanf("%d", &n);
    // verifie si le nombre est pair ou impair
    if (n % 2 == 0){
        printf("%d est un nombre pair.\n", n);
    }else{
        printf("%d est un nombre impair.\n", n);
    }
return 0;
}
