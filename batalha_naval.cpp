#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	FILE *file;
	file = fopen("B_in.txt", "r"); //Leitura do arquivo de entrada


	if(file == NULL)
	{
		printf("Arquivo não encontrado\n");
		system("pause");
		return 0;
	}

	int N = 0;
	int nNavio = 0;
	int L, R, C;
	bool isValid = true;

	int board[10][10];

	while((fscanf(file, "%i", &N)) != EOF)
	{
		if(nNavio != 0)
		{
			fscanf(file, "%i %i %i", &L, &R, &C);

			if(N == 0)
			{
				for(int i = 0; i < 10; i++)
				{
					for(int j = 0; j < 10; j++)
					{
						if(i == R - 1 && j == C - 1)
						{
							if(board[i][j] == 1 || C + L > 11)
							{
								isValid = false;
							}
							board[i][j] = 1;
							C++;
							L--;
							if(L == 0)
							{
								C = 0;
							}
						}
					}
				}
			}
			else
			{
				for(int i = 0; i < 10; i++)
				{
					for(int j = 0; j < 10; j++)
					{
						if(i == R - 1 && j == C - 1)
						{
							if(board[i][j] == 1 || R + L > 11)
							{
								isValid = false;
							}
							board[i][j] = 1;
							R++;
							L--;
							if(L == 0)
							{
								R = 0;
							}
						}
					}
				}
			}
			nNavio--;
			if(nNavio == 0)
			{
				/*for(int i = 0; i < 10; i++)
				{
					printf("\n");
					for(int j = 0; j < 10; j++)
					{
						printf("%i ", board[i][j]);
					}
				}*/

				if(isValid == true)
				{
					printf("Y");
				}
				else
				{
					printf("N");
				}
				printf("\n");

			}
		}
		else
		{
			nNavio = N;

			for(int i = 0; i < 10; i++)
			{
				for(int j = 0; j < 10; j++)
				{
					board[i][j] = 0;
				}
			}
			isValid = true;
		}
	}
	fclose(file);
	system("pause");
	return 0;
}
