
#include <stdio.h>
#include<locale.h>

int main(){

     setlocale(LC_ALL,"Potuguese_Brazil");
    
    int jp[10],j,p;
    
    
        printf("Digite o valor inicial:");
        scanf("%d",&j);
        printf("Digite a razão:");
        scanf("%d",&p);
        jp[0]=j;
  
    
    for(int i=1; i<10; i++){
     jp[i]=jp[i-1]*p;
   
    }
    for(int m=0; m<10; m++){
    printf("%d\n",jp[m]);
    }
   
    
return 0;
}
   
     
    
    
    
    
    
  
 
    