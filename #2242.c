#include <stdio.h>
#include <string.h>

#define vogal(letra) ((letra) == 'a' || (letra) == 'e' || (letra) == 'i' || (letra) == 'o' || (letra) == 'u')

int main()
{
    char texto [51];
    char vogais [51];
    int v = 0;
    
    scanf ("%s", texto);
    
    for (int i = 0; texto[i] != '\0'; i++) {
        if (vogal(texto[i])) {
            vogais[v++] = texto[i];
        }
    }
    
    int engracada = 1; 
    for (int i = 0; i < v / 2; i++) {
        if (vogais[i] != vogais[v - 1 - i]) {
            engracada = 0; 
            break;
        }
    }
    if (engracada) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    
    
    return 0;
}
