#include <stdio.h>
#include <string.h>
#include <ctype.h>

void hexbin(char hex, int V[], int inicio) {
    int valor;
    hex = toupper(hex);
    if (hex >= '0' && hex <= '9') 
        valor = hex - '0';
    else valor = hex - 'A' + 10;

    for (int i = 3; i >= 0; i--) {
        V[inicio + i] = valor % 2;
        valor /= 2;
    }
}

void hexprint(int V[], int tamanho) {
    for (int i = 0; i < tamanho; i += 4) {
        int valor = V[i] * 8 + V[i + 1] * 4 + V[i + 2] * 2 + V[i + 3];
        if (valor < 10) 
            printf("%d", valor);
        else printf("%c", 'A' + (valor - 10));
    }
    printf("\n");
}

int main() {
    int n;
    printf("digite o numero de digitos hexadecimais: ");
    scanf("%d", &n);

    int tamanho = 4 * n;
    char hexA[n + 1], hexB[n + 1];
    int A[tamanho], B[tamanho], Bcomp[tamanho], C[tamanho];

    printf("digite o valor de A (Hexadecimal): ");
    scanf("%s", hexA);
    printf("digite o valor de B (Hexadecimal): ");
    scanf("%s", hexB);
    
    for (int i = 0; i < n; i++) {
        hexbin(hexA[i], A, i * 4);
        hexbin(hexB[i], B, i * 4);
    }
    
    for (int i = 0; i < tamanho; i++) {
        Bcomp[i] = !B[i];
    }
    
    int carry = 1; // 
    for (int i = tamanho - 1; i >= 0; i--) {
        int soma = A[i] + Bcomp[i] + carry;
        C[i] = soma % 2;
        carry = soma / 2;
    }
    
    if (A[0] != B[0] && C[0] != A[0]) {
        printf("erro. overflow.\n");
    } else {
        printf("resultado em hexadecimal: ");
        hexprint(C, tamanho);
    }

    return 0;
}
