#include <stdio.h>

int main() {
    int N = 4;

    int A[4] = {1, 0, 1, 1};  
    int B[4] = {0, 1, 1, 0};  
    int C[5];                

    int carry = 0;

    for (int i = N - 1; i >= 0; i--) {
        int soma = A[i] + B[i] + carry;

        if (soma == 0) {
            C[i + 1] = 0;
            carry = 0;
        } else if (soma == 1) {
            C[i + 1] = 1;
            carry = 0;
        } else if (soma == 2) {
            C[i + 1] = 0;
            carry = 1;
        } else { 
            C[i + 1] = 1;
            carry = 1;
        }
    }

    C[0] = carry;

    printf("resultado: ");
    for (int i = 0; i < N + 1; i++) {
        printf("%d", C[i]);
    }

    return 0;
}
