#include<stdio.h>
#include<math.h>
int main(){
float a, b, c, delta, X1, X2;
printf(“Digite o coeficiente a da
equação:\n:”);
scanf("%f",&a);
printf(“Digite o coeficiente b da equação:\n:”);
scanf("%f",&b);
printf(“Digite o coeficiente da equação:\n:”);
scanf("%f",&c);
delta = (pow(b,2) - 4 * a * c);
X1 = (-b + sqrt(delta))/(2 * a);
X2 = (-b - sqrt(delta))/ (2 * a);
if (delta == 0){
printf("RAIZ UNICA\n");
printf("X1 = %.2f\n",X1);
}
else if (delta < 0 ){
printf("RAIZES IMAGINARIAS\n");
}
else if (delta > 0 ) {
printf("RAIZES DISTINTAS\n");
printf("X1 = %.2f\n",X1);
printf("X2 = %.2f\n",X2);
}
return 0;
}
