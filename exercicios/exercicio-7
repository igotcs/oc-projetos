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
    int A[tamanho], B[tamanho], C[tamanho + 4];
    int carry = 0;

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
        int soma = bcdec(A, inicio) + bcdec(B, inicio) + carry;

        if (soma > 9) {
            soma += 6; 
            carry = 1;
        } else {
            carry = 0;
        }

        decbcd(soma % 16, C, inicio + 4); 
    }
    
    if (carry) {
        C[0] = 0;
        C[1] = 0;
        C[2] = 0;
        C[3] = 1;
    } else {
        C[0] = 0; C[1] = 0; C[2] = 0; C[3] = 0;
    }

    printf("resultado: ");
    for (int i = 0; i < tamanho + 4; i++) {
        printf("%d", C[i]);
    }

    return 0;
}
