#include<stdio.h>
   
   int main(){
       
       int n, vet[n];
       int i = 0;
       
       scanf("%d", &n);
       
       for(i=0;i<n;i++){
           scanf("%d", &vet[i]);
       }
       for(i=0;i<n;i++)
        printf("%d", vet[i]);
        printf("\n");
        return 0;
}
  
