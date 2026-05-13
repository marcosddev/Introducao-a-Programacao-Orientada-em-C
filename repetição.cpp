#include <stdio.h>

int main(){
    int num, qpar, qimpar;
    qpar=0;
    qimpar=0;
    for(int i=1; i<=15; i++){
        printf("\n Digite o %dº número: ", i);
        scanf("%d", &num);
        if(num%2==0)
            qpar++;
        else
        qimpar++;
    }
    printf("\n A quantidade de números pares é %d", qpar);
    printf("\n A quantidade de números impares é %d", qimpar);
    return(0);
            
        }
