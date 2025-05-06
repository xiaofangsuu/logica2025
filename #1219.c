#include <stdio.h>
#include <math.h>
 
int main() {
 
    int a,b,c;
    double Asun,Aviol,Arose,Atriangulo,p,r,R,pi;
    pi = 3.1415926535897;
    
    while (scanf("%d %d %d", &a, &b, &c) == 3) {
        p = (a + b + c)/2.0;
        
        Atriangulo = sqrt(p*(p-a)*(p-b)*(p-c));
        
        r = Atriangulo/p;
        Arose = pi*r*r;
        
        Aviol = Atriangulo - Arose;
        
        R = (a*b*c)/(4.0*Atriangulo);
        Asun = pi*R*R - Atriangulo;
        
        printf("%.4f %.4f %.4f\n", Asun, Aviol, Arose);
        
    }
    
    return 0;
}
