#include "Menu.h"
#include "Functions.h"

void menu_max(int a[m][n], int M, int N)
{
	int sign;
	printf(" ������������������������������������������������������������\n"
		"|                                                            |\n"
		"|              >> ����� ������������� �������� <<            |\n"
		"|                                                            |\n"
		"|  >> �������� ��������:                                     |\n"
		"|                                                            |\n"
		"|       1) � ������                                          |\n"
		"|       2) � �������                                         |\n"
		"|       3) � ������� ���������                               |\n"
		"|       4) � �������� ���������                              |\n"
		"|       5) � �������                                         |\n"
		"|                                                            |\n"
		"|       >> ������� 0, ����� ��������� ����� <<               |\n"
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
	printf(" ������������������������������������������������������������\n"
		"|                                                            |\n"
		"|       >> ������� ���������� ������������� ��������� <<     |\n"
		"|                                                            |\n"
		"|  >> �������� ��������:                                     |\n"
		"|                                                            |\n"
		"|       1) � ������                                          |\n"
		"|       2) � �������                                         |\n"
		"|       3) � ������� ���������                               |\n"
		"|       4) � �������� ���������                              |\n"
		"|       5) � �������                                         |\n"
		"|                                                            |\n"
		"|       >> ������� 0, ����� ��������� ����� <<               |\n"
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
	printf(" ������������������������������������������������������������\n"
		"|                                                            |\n"
		"|              >> ����� ������������ �������� <<             |\n"
		"|                                                            |\n"
		"|  >> �������� ��������:                                     |\n"
		"|                                                            |\n"
		"|       1) � ������                                          |\n"
		"|       2) � �������                                         |\n"
		"|       3) � ������� ���������                               |\n"
		"|       4) � �������� ���������                              |\n"
		"|       5) � �������                                         |\n"
		"|                                                            |\n"
		"|       >> ������� 0, ����� ��������� ����� <<               |\n"
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
	printf(" ������������������������������������������������������������\n"
		"|                                                            |\n"
		"|       >> ������� ���������� ������������� ��������� <<     |\n"
		"|                                                            |\n"
		"|  >> �������� ��������:                                     |\n"
		"|                                                            |\n"
		"|       1) � ������                                          |\n"
		"|       2) � �������                                         |\n"
		"|       3) � ������� ���������                               |\n"
		"|       4) � �������� ���������                              |\n"
		"|       5) � �������                                         |\n"
		"|                                                            |\n"
		"|       >> ������� 0, ����� ��������� ����� <<               |\n"
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
	printf(" ������������������������������������������������������������\n"
		"|                                                            |\n"
		"|              >> ���������� ������� �� ��������<<           |\n"
		"|                                                            |\n"
		"|  >> �������� ��������:                                     |\n"
		"|                                                            |\n"
		"|       1) � ������                                          |\n"
		"|       2) � �������                                         |\n"
		"|       3) � ���������                                       |\n"
		"|       4) � �������                                         |\n"
		"|                                                            |\n"
		"|       >> ������� 0, ����� ��������� ����� <<               |\n"
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
	printf(" ������������������������������������������������������������\n"
		"|                                                            |\n"
		"|            >> ���������� ������� �� �����������<<          |\n"
		"|                                                            |\n"
		"|  >> �������� ��������:                                     |\n"
		"|                                                            |\n"
		"|       1) � ������                                          |\n"
		"|       2) � �������                                         |\n"
		"|       3) � ���������                                       |\n"
		"|       4) � �������                                         |\n"
		"|                                                            |\n"
		"|       >> ������� 0, ����� ��������� ����� <<               |\n"
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
	printf(" ������������������������������������������������������������\n"
		"|                                                            |\n"
		"|                   >> ��������� ������� <<                  |\n"
		"|                                                            |\n"
		"|  >> �������� ��������:                                     |\n"
		"|                                                            |\n"
		"|       1) ��������� ������                                  |\n"
		"|       2) ��������� �������                                 |\n"
		"|       3) ��������� ��������                                |\n"
		"|       4) �������� ������                                   |\n"
		"|       5) �������� �������                                  |\n"
		"|       6) ����� �����                                       |\n"
		"|       7) ����� ��������                                    |\n"
		"|                                                            |\n"
		"|       >> ������� 0, ����� ��������� ����� <<               |\n"
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
