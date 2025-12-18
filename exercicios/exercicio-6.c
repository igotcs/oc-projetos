#include <stdio.h>

int bintodec(int V[], int n) {
    int valor = 0;
    for (int i = 0; i < n; i++) {
        valor = valor * 2 + V[i];
    }
    return valor;
}

void dectobin(int valor, int V[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        V[i] = valor % 2;
        valor /= 2;
    }
}

int main() {
    int n;
    printf("digite o numero de bits: ");
    scanf("%d", &n);

    int A[n], B[n], C[n], R[n];

    printf("digite os bits de A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("digite os bits de B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    int a = bintodec(A, n);
    int b = bintodec(B, n);

    if (b == 0) {
        printf("erro.\n");
        return 0;
    }

    int quociente = a / b;
    int resto = a % b;

    dectobin(quociente, C, n);
    dectobin(resto, R, n);

    printf("quociente: ");
    for (int i = 0; i < n; i++) {
        printf("%d", C[i]);
    }

    printf("\nresto: ");
    for (int i = 0; i < n; i++) {
        printf("%d", R[i]);
    }

    return 0;
}
