#include "Menu.h"
#include "Functions.h"

void menu_max(int a[m][n], int M, int N)
{
	int sign;
	printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
		"|                                                            |\n"
		"|              >> Поиск максимального элемента <<            |\n"
		"|                                                            |\n"
		"|  >> Выберете действие:                                     |\n"
		"|                                                            |\n"
		"|       1) В строке                                          |\n"
		"|       2) В столбце                                         |\n"
		"|       3) В главной диагонали                               |\n"
		"|       4) В побочной диагонали                              |\n"
		"|       5) В массиве                                         |\n"
		"|                                                            |\n"
		"|       >> Введите 0, чтобы вернуться назад <<               |\n"
		"|                                                            |\n");
	do {
		printf("| Answer: ");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 5));
	switch (sign)
	{
	case 0: {return; }
			break;
	case 1: {
		max_str(a, M, N); 
	} break;
	case 2: {
		max_col(a, M, N);
	} break;
	case 3: {
		max_main_diag(a, M, N);
	} break;
	case 4: {
		max_side_diag(a, M, N);
	} break;
	case 5: {
		max_all(a, M, N);
	} break;
	}
}
void menu_plus(int a[m][n], int M, int N)
{
	int sign;
	printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
		"|                                                            |\n"
		"|       >> Подсчет количества положительных элементов <<     |\n"
		"|                                                            |\n"
		"|  >> Выберете действие:                                     |\n"
		"|                                                            |\n"
		"|       1) В строке                                          |\n"
		"|       2) В столбце                                         |\n"
		"|       3) В главной диагонали                               |\n"
		"|       4) В побочной диагонали                              |\n"
		"|       5) В массиве                                         |\n"
		"|                                                            |\n"
		"|       >> Введите 0, чтобы вернуться назад <<               |\n"
		"|                                                            |\n");
	do {
		printf("| Answer: ");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 5));
	switch (sign)
	{
	case 0: {return; }
			break;
	case 1: {
		plus_str(a, M, N);
	} break;
	case 2: {
		plus_col(a, M, N);
	} break;
	case 3: {
		plus_main_diag(a, M, N);
	} break;
	case 4: {
		plus_side_diag(a, M, N);
	} break;
	case 5: {
		plus_all(a, M, N);
	} break;
	}
}
void menu_min(int a[m][n], int M, int N)
{
	int sign;
	printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
		"|                                                            |\n"
		"|              >> Поиск минимального элемента <<             |\n"
		"|                                                            |\n"
		"|  >> Выберете действие:                                     |\n"
		"|                                                            |\n"
		"|       1) В строке                                          |\n"
		"|       2) В столбце                                         |\n"
		"|       3) В главной диагонали                               |\n"
		"|       4) В побочной диагонали                              |\n"
		"|       5) В массиве                                         |\n"
		"|                                                            |\n"
		"|       >> Введите 0, чтобы вернуться назад <<               |\n"
		"|                                                            |\n");
	do {
		printf("| Answer: ");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 5));
	switch (sign)
	{
	case 0: {return; }
			break;
	case 1: {
		min_str(a, M, N);
	} break;
	case 2: {
		min_col(a, M, N);
	} break;
	case 3: {
		min_main_diag(a, M, N);
	} break;
	case 4: {
		min_side_diag(a, M, N);
	} break;
	case 5: {
		min_all(a, M, N);
	} break;
	}
}
void menu_minus(int a[m][n], int M, int N)
{
	int sign;
	printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
		"|                                                            |\n"
		"|       >> Подсчет количества отрицательных элементов <<     |\n"
		"|                                                            |\n"
		"|  >> Выберете действие:                                     |\n"
		"|                                                            |\n"
		"|       1) В строке                                          |\n"
		"|       2) В столбце                                         |\n"
		"|       3) В главной диагонали                               |\n"
		"|       4) В побочной диагонали                              |\n"
		"|       5) В массиве                                         |\n"
		"|                                                            |\n"
		"|       >> Введите 0, чтобы вернуться назад <<               |\n"
		"|                                                            |\n");
	do {
		printf("| Answer: ");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 5));
	switch (sign)
	{
	case 0: {return; }
			break;
	case 1: {
		mins_str(a, M, N);
	} break;
	case 2: {
		mins_col(a, M, N);
	} break;
	case 3: {
		mins_main_diag(a, M, N);
	} break;
	case 4: {
		mins_side_diag(a, M, N);
	} break;
	case 5: {
		mins_all(a, M, N);
	} break;
	}
}
void menu_sort_min(int a[m][n], int M, int N)
{
	int sign;
	printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
		"|                                                            |\n"
		"|              >> Сортировка массива по убыванию<<           |\n"
		"|                                                            |\n"
		"|  >> Выберете действие:                                     |\n"
		"|                                                            |\n"
		"|       1) В строке                                          |\n"
		"|       2) В столбце                                         |\n"
		"|       3) В диагонали                                       |\n"
		"|       4) В массиве                                         |\n"
		"|                                                            |\n"
		"|       >> Введите 0, чтобы вернуться назад <<               |\n"
		"|                                                            |\n");
	do {
		printf("| Answer: ");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 4));
	switch (sign)
	{
	case 0: {}
			break;
	case 1: {}
			break;
	case 2: {}
			break;
	case 3: {}
			break;
	case 4: {}
			break;
	}
}
void menu_sort_max(int a[m][n], int M, int N)
{
	int sign;
	printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
		"|                                                            |\n"
		"|            >> Сортировка массива по возрастанию<<          |\n"
		"|                                                            |\n"
		"|  >> Выберете действие:                                     |\n"
		"|                                                            |\n"
		"|       1) В строке                                          |\n"
		"|       2) В столбце                                         |\n"
		"|       3) В диагонали                                       |\n"
		"|       4) В массиве                                         |\n"
		"|                                                            |\n"
		"|       >> Введите 0, чтобы вернуться назад <<               |\n"
		"|                                                            |\n");
	do {
		printf("| Answer: ");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 4));
	switch (sign)
	{
	case 0: {}
			break;
	case 1: {}
			break;
	case 2: {}
			break;
	case 3: {}
			break;
	case 4: {}
			break;
	}
}
void menu_change(int a[m][n], int M, int N)
{
	int sign;
	printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
		"|                                                            |\n"
		"|                   >> Изменение массива <<                  |\n"
		"|                                                            |\n"
		"|  >> Выберете действие:                                     |\n"
		"|                                                            |\n"
		"|       1) Изменение строки                                  |\n"
		"|       2) Изменение столбца                                 |\n"
		"|       3) Изменение элемента                                |\n"
		"|       4) Удаление строки                                   |\n"
		"|       5) Удаление столбца                                  |\n"
		"|       6) Смена строк                                       |\n"
		"|       7) Смена столбцов                                    |\n"
		"|                                                            |\n"
		"|       >> Введите 0, чтобы вернуться назад <<               |\n"
		"|                                                            |\n");
	do {
		printf("| Answer: ");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 7));
	switch (sign)
	{
	case 0: {
		return;
	} break;
	case 1: {
		line_replacement(a, M, N);
	} break;
	case 2: {
		column_replacement(a, M, N); 
	} break;
	case 3: {
		element_replacement(a, M, N);
	} break;
	case 4: {}
			break;
	case 5: {}
			break;
	case 6: {
		change_line(a, M, N); 
	} break;
	case 7: {
		change_column(a, M, N); 
	} break;
	}
}
int menu(int a[m][n], int M, int N)
{
	int sign;
	printf(" ––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––\n"
		"|                                                            |\n"
		"|                         >> Меню <<                         |\n"
		"|                                                            |\n"
		"|  >> Выберете действие:                                     |\n"
		"|                                                            |\n"
		"|       1) Ввод массива                                      |\n"
		"|       2) Вывод массива                                     |\n"
		"|       3) Изменение массива                                 |\n"
		"|       4) Сортировка массива по убыванию                    |\n"
		"|       5) Сортировка массива по возрастанию                 |\n"
		"|       6) Поиск максимального элемента                      |\n"
		"|       7) Поиск минимального элемента                       |\n"
		"|       8) Подсчет количества положительных элементов        |\n"
		"|       9) Подсчет количества отрицательных элементов        |\n"
		"|                                                            |\n"
		"|       >> Введите 0, чтобы выйти из программы <<            |\n"
		"|                                                            |\n");
	do {
		printf("| Answer: ");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 7));
	switch (sign)
	{
	case 0: {
		return 0;
	}
	case 1: {
		read_M_N(&M, &N);
		read(a, M, N);
	} break;
	case 2: {
		end_a(a, M, N);
	} break;
	case 3: {
		menu_change(a, M, N);
	} break;
	case 4: {
		menu_sort_min(a, M, N);
	} break;
	case 5: {
		menu_sort_max(a, M, N);
	} break;
	case 6: {
		menu_max(a, M, N);
	} break;
	case 7: {
		menu_min(a, M, N);
	} break;
	
	case 8: {
		menu_plus(a, M, N);
	} break;
	case 9: {
		menu_minus(a, M, N);
	} break;
	}

}
