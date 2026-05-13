#include <stdio.h>
int main(){
int num;
printf("Entre com um valor:\n");
scanf("%d", &num);
num = (num * 9 / 5) + 32;
printf("Esse valor em graus Fahrenheit e: %d \n", num);
return 0;
}
