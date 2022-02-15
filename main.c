#include <stdio.h>

void quadrado(int tamanho){
    for (int i = 0; i < tamanho; i++) {
        for (int k = 0; k < tamanho; k++) {
            putchar('#');
        }
        putchar('\n');
    }
}

void xadrez(int tamanho){
    for (int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if ((i+j) % 2 == 0)
                putchar('#');
            else
                putchar('_');
        }
        putchar('\n');
    }
}

void triangulo(int tamanho){
    int j = 0;
    for (int i = 0; i < tamanho; i++){
        if (j <= i)
            for (j = 0; j < i; j++){
                putchar('#');
            }
        else
            for (j; j > i; j--){
                putchar('#');
            }
        putchar('\n');
    }
}


int main() {

    //quadrado(5);
    //xadrez(5);
    triangulo(5);

    return 0;
}
