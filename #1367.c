#include <stdio.h>
#include <string.h>

#define MAX_PROBLEMS 26  

typedef struct {
    int penalty;
    int solved;
} Problem;

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        Problem problems[MAX_PROBLEMS];
        for (int i = 0; i < MAX_PROBLEMS; i++) {
            problems[i].penalty = 0;
            problems[i].solved = 0;
        }

        int totalTime = 0;
        int totalSolved = 0;

        for (int i = 0; i < n; i++) {
            char letra;
            int tempo;
            char julgamento[10];
            scanf(" %c %d %s", &letra, &tempo, julgamento);

            int idx = letra - 'A';

            if (strcmp(julgamento, "correct") == 0 && problems[idx].solved == 0) {
                problems[idx].solved = 1;
                totalSolved++;
                totalTime += tempo + problems[idx].penalty;
            } else if (strcmp(julgamento, "incorrect") == 0 && problems[idx].solved == 0) {
                problems[idx].penalty += 20;
            }
        }
    

        printf("%d %d\n", totalSolved, totalTime);
    }

    return 0;
}
    
   
