#include <stdio.h>

int main(void) {
float num1, num2, num3;
    printf("Inserisci il primo numero: ");
    scanf("%f", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%f", &num2);
    printf("Inserisci il terzo numero: ");
    scanf("%f", &num3);
    if (num1 > num2 && num1>num3) {
        printf ("il primo numero e' il maggiore");
    }
    else if (num2 > num3 && num2>num1) {
            printf("il secondo numero e' il maggiore");
    }
    else {
        printf("il terzo numero e' il maggiore");
    }
    return 0;
}
