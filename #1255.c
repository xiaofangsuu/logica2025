#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
   int N;
   char texto [201];
   
   scanf("%d", &N);
   getchar();
   
   for (int i = 0; i<N; i++){
       fgets (texto, 201, stdin);
       texto[strcspn(texto, "\n")] = 0;
       
       int freq[26] = {0};
       
       int len = strlen(texto);
    
       for (int j = 0; j < len; j++) {
            if (isalpha(texto[j])) {
                char letra = tolower(texto[j]); 
                freq[letra - 'a']++;            
            }
        }
        int max = 0;
        for  (int k = 0; k<26; k++){
            if (freq[k] > max) {
                max = freq[k];
            }
        }
        for (int k = 0; k < 26; k++) {
            if (freq[k] == max) {
                printf("%c", 'a' + k);
            }
        }
        printf("\n");
}
    return 0;
}
