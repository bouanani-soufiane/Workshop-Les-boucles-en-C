#include <stdio.h>

int main() {
    int nombre;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    for (int i = 1; i <= 10; i++) {
        int produit = nombre * i;
        printf("%d * %d = %d\n", nombre, i, produit);
    }

    return 0;
}
