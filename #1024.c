#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int N;
    char M[1001];
    
    scanf("%d",&N);
    getchar();
    
    for (int i = 0; i<N; i++){
        fgets (M, 1001, stdin);
        M[strcspn(M, "\n")] = 0;
    
    
    int len = strlen(M);
    
    for (int j = 0; j < len; j++) {
            if (isalpha(M[j])) {
                M[j] += 3;
            }
    }
    for (int j = 0; j < len / 2; j++) {
            char temp = M[j];
            M[j] = M[len - 1 - j];
            M[len - 1 - j] = temp;
        }
     for (int j = len / 2; j < len; j++) {
            M[j] -= 1;
     }
      printf("%s\n", M);
}
    

    return 0;
}
