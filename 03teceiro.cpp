
#include <stdio.h>
#include<locale.h>
#define tmax 10
int main(){

     setlocale(LC_ALL,"Potuguese_Brazil");
    
    int pa[tmax],j,p,d;
    
    
        printf("Digite o valor inicial:");
        scanf("%d",&j);
        printf("Digite a razão:");
        scanf("%d",&p);
        pa[0]=j;
  
    
    for(int i=1; i<tmax; i++){
     pa[i]=pa[i-1]+p;
   
    }
    for(int m=0; m<tmax; m++){
    printf("%d\n",pa[m]);
    }
   
    
return 0;
}
   
     
    
    
    
    
    
  
 
    