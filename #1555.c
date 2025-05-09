#include<stdio.h>
#include<math.h>

int main(){
    int N,x,y,i;
    double R,B,C;

    i=0;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d %d", &x, &y);


        R = pow((3*x),2) + y*y ;
        B = 2*x*x + pow((5*y),2);
        C = -100*x + pow (y,3);

        if (R>B && R>C) {
            printf("Rafael ganhou\n");
        }
        else if (B>R && B>C) {
            printf("Beto ganhou\n");
        }
        else {
            printf("Carlos ganhou\n");
        }
        
        i++;
    }

    return 0;
}
