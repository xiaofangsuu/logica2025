#include <stdio.h>

int mdc (int f1, int f2){
    if (f2==0){
        return f1;
    }
    return mdc (f2, f1 % f2);
}
int main() 
{
    int n,f1,f2;
    scanf ("%d",&n);
    for (int i = 0; i<n; i++){
        scanf ("%d %d", &f1, &f2);
        printf ("%d\n",mdc(f1,f2));
    }
 
    return 0;
}
