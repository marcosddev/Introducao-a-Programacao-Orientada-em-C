#include <stdio.h>
int main(){
	int num, i;
	
	printf("Digite um número para ver sua tabuada: ");
	scanf("%d", &num);
	
	printf("=================================");
	printf("	Tabuada do %d\n", num);
	printf("=================================");
	
	for (i=0; i<=10; i++){
		printf("| %d x %d = %d |\n", num, i, num*i);
	}
	
	printf("=================================");
	
	return 0;
}
