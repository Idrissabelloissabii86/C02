#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("%d est un nombre %s.\n", n, (n % 2 == 0) ? "pair" : "impair");

    return 0;
}
