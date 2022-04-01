#include <cstdio>

float n1, n2, m;
int main(){
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		printf("digite a segunda nota: ");
		scanf("%f", &n2);
		m = (n1 + n2)/2;
		printf("A sua media eh: %.1f", m);
	
	return 0;
}