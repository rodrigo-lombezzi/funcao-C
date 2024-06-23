#include <stdio.h>

void imprimirPiramide(int num);
void imprimirNum(int num);
void imprimirEspaco(int espaco);

int main() {
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    imprimirPiramide(num);
  
}

void imprimirPiramide(int num) {
    int espaco = num - 1;
    for (int i = 1; i <= num; i++) {
        imprimirEspaco(espaco);
        imprimirNum(i);
        printf("\n");
        espaco--;
    }
}

void imprimirNum(int num) {
    for (int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
}

void imprimirEspaco(int espaco) {
    for (int i = 0; i < espaco; i++) {
        printf(" ");
    }
}
