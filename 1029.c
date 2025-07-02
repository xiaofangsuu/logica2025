#include <stdio.h>

int chamadas = 0;

int fib(int n){
    chamadas++;
    if (n==0) return 0;
    if (n==1) return 1;
    return fib(n-1)+fib(n-2);
}

int main() {
    
    int nteste,n;
    scanf("%d",&nteste);
    
    for (int i=0; i<nteste;i++){
        scanf ("%d",&n);
        chamadas = -1;
        int resultado = fib(n);
        printf ("fib(%d) = %d calls = %d\n",n,chamadas,resultado);
    
    }
 
    return 0;
}
