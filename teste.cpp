#include <cstdio>

int main(){
	int ano, idade, resultado;
	printf("informe o ano que nasceu: ");
	scanf("%i", &ano);
	printf("informe o ano atual: ");
	scanf("%i", &idade);
	resultado = (idade - ano);
	printf("sua idade eh %i", resultado);
	
	return 0;
}