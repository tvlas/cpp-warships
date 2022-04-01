#include <cstdio>

int main()
{
	int i;
	int fatorial[10];
	fatorial[0] = 1;
	for (i = 1; i <= 9; i++)
	{
		fatorial[i] = i * fatorial[i - 1];
	}

	int number;
	scanf("%d", &number);

	int x = 0;
	int k;
	for (i = 1; i <= 9; i++)
	{
		if (fatorial[i] > number)
		{
			k = i - 1;
			break;
		}
	}

	for (i = k; i >= 0; i--)
	{
		x += (number / fatorial[i]);
		number = number % fatorial[i];
	}

	printf("%d\n", x);
	return 0;
}