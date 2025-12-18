#include <stdio.h>

int main() {
    int n;
    printf("digite o numero de bits: ");
    scanf("%d", &n);

    int A[n], B[n], Bcomp[n], C[n];
    int carry = 1;

    printf("digite os bits de A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("digite os bits de B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
        Bcomp[i] = !B[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        int soma = A[i] + Bcomp[i] + carry;
        C[i] = soma % 2;
        carry = soma / 2;
    }

    if (A[0] != B[0] && C[0] != A[0]) {
        printf("overflow.\n");
    }

    printf("resultado: ");
    for (int i = 0; i < n; i++) {
        printf("%d", C[i]);
    }
}
