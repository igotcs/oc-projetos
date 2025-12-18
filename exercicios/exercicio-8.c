#include <stdio.h>

int bcdec(int bcd[], int inicio) {
    return bcd[inicio] * 8 + bcd[inicio + 1] * 4 + bcd[inicio + 2] * 2 + bcd[inicio + 3];
}

void decbcd(int valor, int bcd[], int inicio) {
    for (int i = 3; i >= 0; i--) {
        bcd[inicio + i] = valor % 2;
        valor /= 2;
    }
}

int main() {
    int n;
    printf("digite o numero de digitos: ");
    scanf("%d", &n);

    int tamanho = 4 * n;
    int A[tamanho], B[tamanho], C[tamanho];
    int borrow = 0;

    printf("digite os bits de A (BCD):\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &A[i]);
    }

    printf("digite os bits de B (BCD):\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        int inicio = i * 4;
        int a = bcdec(A, inicio);
        int b = bcdec(B, inicio);

        int sub = a - b - borrow;
        if (sub < 0) {
            sub += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        decbcd(sub, C, inicio);
    }

    if (borrow) {
        printf("erro.\n");
        return 0;
    }

    printf("resultado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", C[i]);
    }

    return 0;
}
