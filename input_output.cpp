#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

const int m = 100, n = 100;

void read_M_N(int *p_M, int *p_N)
{
	do
	{
		printf("M ="); scanf("%d", p_M);
	} while ((*p_M > m) || (*p_M < 0));
	do
	{
		printf("N ="); scanf("%d", p_N);
	} while ((*p_N > n) || (*p_N < 0));
}

void read(int a[m][n], int M, int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("\n a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void end_a(int a[m][n], int M, int N)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("  %d  ", a[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	system("chcp 1251 > nul");

	int i, j, M, N;
	int a[m][n];

	read_M_N(&M, &N);
	read(a, M, N);
	end_a(a, M, N);

	system("pause");
	return 0;
}
