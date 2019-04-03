#define _CRT_SECURE_NO_WARNINGS
#include "../Header/Functions.h"

int main()
{
	system("chcp 1251 > nul");

	int sign, M=0, N=0;
	int a[m][n];
	
	do {
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
			} while ((sign < 0) || (sign > 9));
			switch (sign)
			{
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
		
	} while (sign != 0);

	return 0;
}
