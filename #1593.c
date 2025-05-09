#include <stdio.h>
#include <string.h>

int contagem_n_peq(unsigned long long n);
int dividir_por_2(char *numero);
int contagem_n_g(char *numero);
int verificacao(const char *numero);

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        char numero[1001];
        scanf("%s", numero);

        if (verificacao(numero)) {
            unsigned long long n = 0;
            sscanf(numero, "%llu", &n);
            printf("%d\n", contagem_n_peq(n));
        } else {
            printf("%d\n", contagem_n_g(numero));
        }
    }

    return 0;
}

int contagem_n_peq(unsigned long long n) {
    int cont = 0;
    while (n) {
        if (n % 2 == 1)
            cont++;
            n >>= 1;
    }
    return cont;
}

int dividir_por_2(char *numero) {
    int tam = strlen(numero);
    int resto = 0;

    for (int i = 0; i < tam; i++) {
        int atual = resto * 10 + (numero[i] - '0');
        numero[i] = (atual / 2) + '0';
        resto = atual % 2;
    }

 
    while (numero[0] == '0' && strlen(numero) > 1)
        memmove(numero, numero + 1, strlen(numero));

    return resto;
}

int contagem_n_g(char *numero) {
    int cont = 0;

    while (!(strlen(numero) == 1 && numero[0] == '0')) {
        int resto = dividir_por_2(numero);
        if (resto == 1)
            cont++;
            
        
    }

    return cont;
}

int verificacao(const char *numero) {
    int tam = strlen(numero);
    if (tam < 18) return 1;

    if (tam == 18 && strcmp(numero, "18446744073709551615") <= 0)
        return 1;

    return 0;
}
