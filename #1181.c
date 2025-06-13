#include <stdio.h>

int main(){
   int L;
   char T;
   double matriz [12][12];
   double soma = 0;
   
   
   scanf("%d",&L);
   scanf(" %c",&T);
   
   for (int i = 0; i<12; i++){
       for(int j = 0; j<12;j++){
           scanf("%lf",&matriz[i][j]);
       }
   }
   
   for (int j = 0; j<12; j++){
       soma += matriz[L][j];
   }
   
   if (T == 'M'){
      soma /= 12;
       
   }
   printf("%.1lf\n",soma);
   
       
   

    return 0;
}
