#include <stdio.h>

int main() {
    int n;
    printf("digite o numero de bits: ");
    scanf("%d", &n);

    int A[n], B[n], C[n];
    int borrow = 0;

    printf("digite os bits de A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("digite os bits de B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        int a = A[i] - borrow;

        if (a < B[i]) {
            C[i] = a + 2 - B[i];
            borrow = 1;
        } else {
            C[i] = a - B[i];
            borrow = 0;
        }
    }

    if (borrow == 1) {
        printf("erro. subtracao nao e possivel.\n");
    }

    printf("resultado: ");
    for (int i = 0; i < n; i++) {
        printf("%d", C[i]);
    }
}
