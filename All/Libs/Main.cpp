#define _CRT_SECURE_NO_WARNINGS
#include "../Header/Functions.h"

int main()
{
	system("chcp 1251 > nul");

	int sign, M=0, N=0;
	int a[m][n];
	
	do {
		printf(" ������������������������������������������������������������\n"
				"|                                                            |\n"
				"|                         >> ���� <<                         |\n"
				"|                                                            |\n"
				"|  >> �������� ��������:                                     |\n"
				"|                                                            |\n"
				"|       1) ���� �������                                      |\n"
				"|       2) ����� �������                                     |\n"
				"|       3) ��������� �������                                 |\n"
				"|       4) ���������� ������� �� ��������                    |\n"
				"|       5) ���������� ������� �� �����������                 |\n"
				"|       6) ����� ������������� ��������                      |\n"
				"|       7) ����� ������������ ��������                       |\n"
				"|       8) ������� ���������� ������������� ���������        |\n"
				"|       9) ������� ���������� ������������� ���������        |\n"
				"|                                                            |\n"
				"|       >> ������� 0, ����� ����� �� ��������� <<            |\n"
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
