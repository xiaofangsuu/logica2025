#include <stdio.h>
#include <string.h>

int main()
{
   int N;
   scanf ("%d", &N);
   getchar ();
   
   for (int i = 0; i<N; i++){
       char texto [51];
       int deslocamento;
       
       fgets (texto, 51, stdin);
       texto[strcspn(texto, "\n")] = 0;
       
       scanf ("%d", &deslocamento);
       getchar();
       
       for (int j = 0; j<strlen (texto); j++){
           texto[j] = (texto[j] - 'A' - deslocamento + 26) %26 + 'A';
       }
       
       printf("%s\n", texto);
       
   }
    return 0;
}
