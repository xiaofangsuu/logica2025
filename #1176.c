#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        unsigned long long a = 0, b = 1, fib;

        if (N == 0) {
            fib = 0;
        } else if (N == 1) {
            fib = 1;
        } else {
            for (int j = 2; j <= N; j++) {
                fib = a + b;
                a = b;
                b = fib;
            }
        }

        printf("Fib(%d) = %llu\n", N, fib);
    }

    return 0;
}
