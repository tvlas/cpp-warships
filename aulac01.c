#include <cstdio>

int main (){
unsigned C, A, Q;
do {
	printf("Informe C e A: ");
scanf("%u %u", &C, &A);
if (C + A == 0) breake;
	Q = A / (C-1);
	if (A % (C-1) > 0) Q++;
	printf("%u\n", Q);
}while(1);
return 0;

}