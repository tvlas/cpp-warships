#include <cstdio>

int main(){
	int	base, altura; 
	float area;
	printf("informe a base do triangulo: ");
	scanf("%d", &base);
	printf("Informe a altura do triangulo ");
	scanf("%d", &altura);
	area = (base * altura)/2;
	printf("o triangulo tem area de: %f", area);
	return 0;
}