#include<stdio.h>

int main()
{
    char T;
    double M [12][12];
    double soma = 0;

    scanf(" %c", &T);

    for (int i = 0; i<12; i++) {
        for (int j = 0; j<12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i<12; i++) {
        for (int j = 0; j<12; j++) {
            if ( i + j < 11) {
                soma += M[i][j];
            }
        }
    }

    if (T == 'M') {
        soma /= 66;
    }

    printf("%.1lf\n", soma) ;

    return 0;
}
