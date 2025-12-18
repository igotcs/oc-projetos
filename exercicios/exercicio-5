#include <stdio.h>

int bintodec(int V[], int n) {
    int valor = 0;

    valor = -V[0] * (1 << (n - 1));

    for (int i = 1; i < n; i++) {
        if (V[i] == 1) {
            valor += (1 << (n - 1 - i));
        }
    }
    return valor;
}


void dectobin(int valor, int C[], int tamanho) {

    unsigned int v = (unsigned int)valor;

    for (int i = tamanho - 1; i >= 0; i--) {
        C[i] = v & 1; // Extrai o bit menos significativo
        v >>= 1;      // Desloca para a direita
    }
}

int main() {
    int n;
    printf("digite o numero de bits: ");
    if (scanf("%d", &n) != 1)
        return 1;

    int A[n], B[n], C[2 * n];

    printf("digite os bits de A:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("digite os bits de B: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &B[i]);

    int valA = bintodec(A, n);
    int valB = bintodec(B, n);
    int produto = valA * valB;

    dectobin(produto, C, 2 * n);

    printf("resultado: ");
    for (int i = 0; i < 2 * n; i++) {
        printf("%d", C[i]);
    }
    printf("\n");

    return 0;
}
