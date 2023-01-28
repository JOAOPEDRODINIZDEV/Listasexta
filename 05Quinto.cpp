
#include <stdio.h>
#include<locale.h>
#define tmax 10
int main(){

     setlocale(LC_ALL,"Potuguese_Brazil");
    
    int v[tmax],j;
    
    
  
    
    for(int i=1; i<tmax; i++){
      
   
    }
    printf("Digite um número entre 1 e 100\n");
    scanf("%d",&j);
    
    for(int p=0; p<tmax; p++){
    if(v[p]==j){
    printf("O número %d  esta no vetor e a sua posição é %d",j,p+1);
   
    }
    
     
    }
return 0;
}
   
     
    
    
    
    
    
  
 
    