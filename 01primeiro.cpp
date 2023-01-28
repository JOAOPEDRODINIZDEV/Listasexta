
#include <stdio.h>
#include<locale.h>

int main(){

     setlocale(LC_ALL,"Potuguese_Brazil");
    int maior, menor,numero, indice_ma, indice_me;
    
    int v[10];
    
    for(int i=0; i<5; i++){
        printf("Matrícula do Aluno %d:",i+1);
        scanf("%d",&v[i]);
    
       
    }
    maior=v[0];
    menor=v[0];
    
    for(int j=0; j<5; j++){
    
   if(v[j]<maior){
    maior=v[j];
    indice_ma=j;
    
       
    }
    if(v[j]>menor){
          
    menor=v[j];
    indice_me=j;
    
    }
    }
    printf("O maior= %d\n índice é:%d\n", maior, indice_ma+1);
    printf("O menor=%d \níndice é: %d\n",menor, indice_me+1);
    
return 0;
}
   
     
    
    
    
    
    
  
 
    