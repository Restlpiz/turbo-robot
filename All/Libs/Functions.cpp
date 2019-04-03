#include "../Header/Functions.h"

// ввод количества столбцов и строк
void read_M_N(int *M, int *N) 
{
	do
	{
		printf("M ="); scanf("%d", M);
	} while ((*M > m) || (*M < 0));
	do
	{
		printf("N ="); scanf("%d", N);
	} while ((*N > n) || (*N < 0));
} 
// ввод элементов массива
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
// вывод массива
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

// Изменение элементов массива
void line_replacement(int a[m][n], int M, int N) // изменение строки
{
	int sign;
	do {
		do {
			printf("Номер строки \n");
			scanf("%d", &sign);
		} while ((sign > M) || (sign < 0));

		for (int j = 0; j < N; j++)
		{
			printf("\n a[%d][%d] = ", sign, j); scanf("%d", &a[sign][j]);
		}

		printf("Назад - 0 \nЕще раз - 1");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 1));
}
void column_replacement(int a[m][n], int M, int N) // изменение столбца
{
	int sign;
	do {

		do {
			printf("Номер столбца \n");
			scanf("%d", &sign);
		} while ((sign > N) || (sign < 0));

		for (int i = 0; i < M; i++)
		{
			printf("\n a[%d][%d] = ", i, sign); scanf("%d", &a[i][sign]);
		}

		printf("Назад - 0 \nЕще раз - 1");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 1));
}
void element_replacement(int a[m][n], int M, int N) // изменение элемента
{
	int sign_M, sign_N, sign;
	do {
		do {
			printf("Номер строки \n");
			scanf("%d", &sign_M);
		} while ((sign_M > M) || (sign_M < 0));
		do {
			printf("Номер столбца \n");
			scanf("%d", &sign_N);
		} while ((sign_N > N) || (sign_N < 0));

		printf("\n a[%d][%d] = ", sign_M, sign_N); scanf("%d", &a[sign_M][sign_N]);

		printf("Назад - 0 \nЕще раз - 1");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 1));
}
void change_line(int a[m][n], int M, int N) // поменять строки местами
{
	int i_1, i_2, help;
	do {
		printf("Номер первой строки \n");
		scanf("%d", &i_1);
	} while ((i_1 > M) || (i_1 < 0));

	do {
		printf("Номер второй строки \n");
		scanf("%d", &i_2);
	} while ((i_2 > M) || (i_2 < 0));

	for (int i = 0; i < N; i++)
	{
		help = a[i_1][i];
		a[i_1][i] = a[i_2][i];
		a[i_2][i] = help;
	}
}
void change_column(int a[m][n], int M, int N) // поменять столбцы местами
{
	int j_1, j_2, help;
	do {
		printf("Номер первого столбца \n");
		scanf("%d", &j_1);
	} while ((j_1 > M) || (j_1 < 0));

	do {
		printf("Номер второго столбца \n");
		scanf("%d", &j_2);
	} while ((j_2 > M) || (j_2 < 0));

	for (int i = 0; i < M; i++)
	{
		help = a[i][j_1];
		a[i][j_1] = a[i][j_2];
		a[i][j_2] = help;
	}
}


//Максимум_минимум
void min_str(int a[m][n], int M, int N)
{
	int k, i, j;
	printf("| Введите номер строки \n");
	scanf("%d", &k);
	int min = a[k][0];

	for (i = 1; i < M; i++)
	{
		if (a[k][i] < min)
		{
			min = a[k][i];
		}
	}
	printf("Минимальный элемент в строке %d \n", min);
}
void max_str(int a[m][n], int M, int N)
{
	int k, i, j;
	printf("| Введите номер строки \n");
	scanf("%d", &k);
	int max = a[k][0];

	for (i = 1; i < N; i++)
	{
		if (a[k][i] > max)
		{
			max = a[k][i];
		}
	}
	printf("Максимальный элемент в строке %d \n", max);
}
void min_col(int a[m][n], int M, int N)
{
	int k, i, j;
	printf("| Введите номер столбца \n");
	scanf("%d", &k);
	int min = a[0][k];

	for (i = 1; i < N; i++)
	{
		if (a[i][k] < min)
		{
			min = a[i][k];
		}
	}
	printf("Минимальный элемент в столбце %d \n", min);
}
void max_col(int a[m][n], int M, int N)
{
	int k, i, j;
	printf("| Введите номер столбца \n");
	scanf("%d", &k);
	int max = a[0][k];

	for (i = 1; i < M; i++)
	{
		if (a[i][k] > max)
		{
			max = a[i][k];
		}
	}
	printf("Максимальный элемент в столбце %d \n", max);
}
void min_main_diag(int a[m][n], int M, int N)
{
	int i;
	int min = a[0][0];
	for (i = 0; i < M; i++)
	{
		if (a[i][i] < min)
		{
			min = a[i][i];
		}
	}
	printf("Минимальный элемент в главной диагонали %d \n", min);
}
void max_main_diag(int a[m][n], int M, int N)
{
	int i;
	int max = a[0][0];
	for (i = 0; i < M; i++)
	{
		if (a[i][i] > max)
		{
			max = a[i][i];
		}
	}
	printf("Максимальный элемент в главной диагонали %d \n", max);
}
void min_side_diag(int a[m][n], int M, int N)
{
	int i, j;
	int min = a[0][N - 1];
	for (i = 0, j = N - 1; j >= 0; i++, j--)
	{
		if (a[i][j] < min)
		{
			min = a[i][j];
		}
	}
	printf("Минимальный элемент в побочной диагонали %d \n", min);
}
void max_side_diag(int a[m][n], int M, int N)
{
	int i, j;
	int max = a[0][N - 1];
	for (i = 0, j = N - 1; j >= 0; i++, j--)
	{
		if (a[i][j] > max)
		{
			max = a[i][j];
		}
	}
	printf("Максимальный элемент в побочной диагонали %d \n", max);
}
void min_all(int a[m][n], int M, int N)
{
	int i, j;
	int min = a[0][0];

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
			}
		}
	}

	printf("Минимальный элемент в массиве %d \n", min);
}
void max_all(int a[m][n], int M, int N)
{
	int i, j;
	int max = a[0][0];

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}

	printf("Максимальный элемент в массиве %d \n", max);
}

// Количество положительных_отрицательных элементов
void mins_str(int a[m][n], int M, int N)
{
	int k, i, j, c = 0;
	printf("| Введите номер строки \n");
	scanf("%d", &k);

	for (i = 0; i < M; i++)
	{
		if (a[k][i] < 0)
			c++;
	}
	printf("Количество отрицательных элементов %d \n", c);
}
void plus_str(int a[m][n], int M, int N)
{
	int k, i, j, c = 0;
	printf("| Введите номер строки \n");
	scanf("%d", &k);

	for (i = 0; i < N; i++)
	{
		if (a[k][i] > 0)
			c++;
	}
	printf("Количество положительных элементов %d \n", c);
}
void mins_col(int a[m][n], int M, int N)
{
	int k, i, j, c = 0;
	printf("| Введите номер столбца \n");
	scanf("%d", &k);

	for (i = 0; i < N; i++)
	{
		if (a[i][k] < 0)
			c++;
	}
	printf("Количество отрицательных элементов %d \n", c);
}
void plus_col(int a[m][n], int M, int N)
{
	int k, i, j, c = 0;
	printf("| Введите номер столбца \n");
	scanf("%d", &k);

	for (i = 0; i < M; i++)
	{
		if (a[i][k] > 0)
			c++;
	}
	printf("Количество положительных элементов %d \n", c);
}
void mins_main_diag(int a[m][n], int M, int N)
{
	int i, c = 0;
	for (i = 0; i < M; i++)
	{
		if (a[i][i] < 0)
			c++;
	}
	printf("Количество отрицательных элементов %d \n", c);
}
void plus_main_diag(int a[m][n], int M, int N)
{
	int i, c = 0;
	for (i = 0; i < M; i++)
	{
		if (a[i][i] > 0)
			c++;
	}
	printf("Количество положительных элементов %d \n", c);
}
void mins_side_diag(int a[m][n], int M, int N)
{
	int i, j, c = 0;
	for (i = 0, j = N - 1; j >= 0; i++, j--)
	{
		if (a[i][j] < 0)
			c++;
	}
	printf("Количество отрицательных элементов %d \n", c);
}
void plus_side_diag(int a[m][n], int M, int N)
{
	int i, j, c = 0;
	for (i = 0, j = N - 1; j >= 0; i++, j--)
	{
		if (a[i][j] > 0)
			c++;
	}
	printf("Количество положительных элементов %d \n", c);
}
void mins_all(int a[m][n], int M, int N)
{
	int i, j, c = 0;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i][j] < 0)
				c++;
		}
	}

	printf("Количество отрицательных элементов %d \n", c);
}
void plus_all(int a[m][n], int M, int N)
{
	int i, j, c = 0;;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i][j] > 0)
				c++;
		}
	}

	printf("Количество положительных элементов %d \n", c);
}