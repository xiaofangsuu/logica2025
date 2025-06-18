#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMAS 26  

typedef struct {
    int penalty;
    int solved;
} Problema;

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        Problema problemas[MAX_PROBLEMAS];
        for (int i = 0; i < MAX_PROBLEMAS; i++) {
            problemas[i].penalty = 0;
            problemas[i].solved = 0;
        }

        int totalTime = 0;
        int totalSolved = 0;

        for (int i = 0; i < n; i++) {
            char letra;
            int tempo;
            char julgamento[10];
            scanf(" %c %d %s", &letra, &tempo, julgamento);

            int idx = letra - 'A';

            if (strcmp(julgamento, "correct") == 0 && problemas[idx].solved == 0) {
                problemas[idx].solved = 1;
                totalSolved++;
                totalTime += tempo + problemas[idx].penalty;
            } else if (strcmp(julgamento, "incorrect") == 0 && problemas[idx].solved == 0) {
                problemas[idx].penalty += 20;
            }
        }

        printf("%d %d\n", totalSolved, totalTime);
    }

    return 0;
}
