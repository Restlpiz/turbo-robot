#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

const int m = 100, n = 100;
// M - строка, N - столбец.
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
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			printf("\n a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void end_a(int a[m][n], int M, int N)
{
	for (int i = 1; i <= M; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			printf("  %d  ", a[i][j]);
		}
		printf("\n");
	}
}

void line_replacement(int a[m][n], int M, int N)
{
	int sign;
	do {
		do {
			printf("Номер строки \n");
			scanf("%d", &sign);
		} while ((sign > M) && (sign < 0));

		for (int j = 0; j < N; j++)
		{
			printf("\n a[%d][%d] = ", sign, j); scanf("%d", &a[sign][j]);
		}
	
		printf("Назад - 0 \nЕще раз - 1");
		scanf("%d", &sign);
	} while ((sign < 0) && (sign > 1));
}

void column_replacement(int a[m][n], int M, int N)
{
	int sign;
	do{
	
		do {
		printf("Номер столбца \n");
		scanf("%d", &sign);
		} while ((sign > N) && (sign < 0));
		
		for (int i = 0; i < M; i++)
		{
			printf("\n a[%d][%d] = ", i, sign); scanf("%d", &a[i][sign]);
		}

		printf("Назад - 0 \nЕще раз - 1");
		scanf("%d", &sign);
	} while ((sign < 0) && (sign > 1));
}

void element_replacement(int a[m][n], int M, int N)
{
	int sign_M, sign_N, sign;
	do {
		do {
			printf("Номер строки \n");
			scanf("%d", &sign_M);
		} while ((sign_M > M) && (sign_M < 0));
		do {
			printf("Номер столбца \n");
			scanf("%d", &sign_N);
		} while ((sign_N > N) && (sign_N < 0));

		printf("\n a[%d][%d] = ", sign_M, sign_N); scanf("%d", &a[sign_M][sign_N]);

		printf("Назад - 0 \nЕще раз - 1");
		scanf("%d", &sign);
	} while ((sign < 0) && (sign > 1));
}

void change_line(int a[m][n], int M, int N)
{
	int i_1, i_2, help;
	do {
		printf("Номер первой строки \n");
		scanf("%d", &i_1);
	} while ((i_1 > M) && (i_1 < 0));

	do {
		printf("Номер второй строки \n");
		scanf("%d", &i_2);
	} while ((i_2 > M) && (i_2 < 0));
	
	for (int i = 1; i <= N; i++)
	{
		help = a[i_1][i];
		a[i_1][i] = a[i_2][i];
		a[i_2][i] = help;
	}
}

void change_column(int a[m][n], int M, int N)
{
	int j_1, j_2, help;
	do {
		printf("Номер первого столбца \n");
		scanf("%d", &j_1);
	} while ((j_1 > M) && (j_1 < 0));

	do {
		printf("Номер второго столбца \n");
		scanf("%d", &j_2);
	} while ((j_2 > M) && (j_2 < 0));

	for (int i = 1; i <= M; i++)
	{
		help = a[i][j_1];
		a[i][j_1] = a[i][j_2];
		a[i][j_2] = help;
	}
}

void replacement(int a[m][n], int M, int N)
{
	int sign;

	do {
		do {
			printf("Строка - 1, столбец - 2, элемент - 3; смена строк - 4, смена столбцов - 5\n");
			scanf("%d", &sign);
		} while ((sign > 3) && (sign < 0));

		switch (sign)
		{
		case 1: {line_replacement(a, M, N); sign = 1; } break;
		case 2: {column_replacement(a, M, N); sign = 1; } break;
		case 3: {element_replacement(a, M, N); sign = 1; } break;
		case 4: {change_line(a, M, N); sign = 1; } break;
		case 5: {change_column(a, M, N); sign = 1; } break;
		//case 0: {menu(); } break;
		}
		
	} while (sign != 0);
}

int main()
{
	system("chcp 1251 > nul");

	int i, j, M, N;
	int a[m][n];

	read_M_N(&M, &N);
	read(a, M, N);
	replacement(a, M, N);
	end_a(a, M, N);

	system("pause");
	return 0;
}
