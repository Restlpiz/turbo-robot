#include "../Header/Menu.h"
#include "../Header/Functions.h"

void menu_max(int a[m][n], int M, int N)
{
	int sign;
	printf(" 末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末\n"
		"|                                                            |\n"
		"|              >> ﾏ�頌� �瑕�韲琿���胛 ��褌褊�� <<            |\n"
		"|                                                            |\n"
		"|  >> ﾂ�砒�褪� 蒟鴦�粨�:                                     |\n"
		"|                                                            |\n"
		"|       1) ﾂ ������                                          |\n"
		"|       2) ﾂ ����磋�                                         |\n"
		"|       3) ﾂ 肭珞��� 蒻璢��琿�                               |\n"
		"|       4) ﾂ ��碚���� 蒻璢��琿�                              |\n"
		"|       5) ﾂ �瑰�鞣�                                         |\n"
		"|                                                            |\n"
		"|       >> ﾂ粢蒻�� 0, ���磊 粢������� �珸琅 <<               |\n"
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
	printf(" 末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末\n"
		"|                                                            |\n"
		"|       >> ﾏ�蓴�褪 ���顆褥�籵 ����跖�褄���� ��褌褊��� <<     |\n"
		"|                                                            |\n"
		"|  >> ﾂ�砒�褪� 蒟鴦�粨�:                                     |\n"
		"|                                                            |\n"
		"|       1) ﾂ ������                                          |\n"
		"|       2) ﾂ ����磋�                                         |\n"
		"|       3) ﾂ 肭珞��� 蒻璢��琿�                               |\n"
		"|       4) ﾂ ��碚���� 蒻璢��琿�                              |\n"
		"|       5) ﾂ �瑰�鞣�                                         |\n"
		"|                                                            |\n"
		"|       >> ﾂ粢蒻�� 0, ���磊 粢������� �珸琅 <<               |\n"
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
	printf(" 末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末\n"
		"|                                                            |\n"
		"|              >> ﾏ�頌� �竟韲琿���胛 ��褌褊�� <<             |\n"
		"|                                                            |\n"
		"|  >> ﾂ�砒�褪� 蒟鴦�粨�:                                     |\n"
		"|                                                            |\n"
		"|       1) ﾂ ������                                          |\n"
		"|       2) ﾂ ����磋�                                         |\n"
		"|       3) ﾂ 肭珞��� 蒻璢��琿�                               |\n"
		"|       4) ﾂ ��碚���� 蒻璢��琿�                              |\n"
		"|       5) ﾂ �瑰�鞣�                                         |\n"
		"|                                                            |\n"
		"|       >> ﾂ粢蒻�� 0, ���磊 粢������� �珸琅 <<               |\n"
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
	printf(" 末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末\n"
		"|                                                            |\n"
		"|       >> ﾏ�蓴�褪 ���顆褥�籵 ���頽瑣褄���� ��褌褊��� <<     |\n"
		"|                                                            |\n"
		"|  >> ﾂ�砒�褪� 蒟鴦�粨�:                                     |\n"
		"|                                                            |\n"
		"|       1) ﾂ ������                                          |\n"
		"|       2) ﾂ ����磋�                                         |\n"
		"|       3) ﾂ 肭珞��� 蒻璢��琿�                               |\n"
		"|       4) ﾂ ��碚���� 蒻璢��琿�                              |\n"
		"|       5) ﾂ �瑰�鞣�                                         |\n"
		"|                                                            |\n"
		"|       >> ﾂ粢蒻�� 0, ���磊 粢������� �珸琅 <<               |\n"
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
	printf(" 末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末\n"
		"|                                                            |\n"
		"|            >> ﾑ���頏�粲� �瑰�鞣� �� 粽銜瑰�瑙��<<          |\n"
		"|                                                            |\n"
		"|  >> ﾂ�砒�褪� 蒟鴦�粨�:                                     |\n"
		"|                                                            |\n"
		"|       1) ﾂ ������                                          |\n"
		"|       2) ﾂ ����磋�                                         |\n"
		"|       3) ﾂ ��碚���� 蒻璢��琿�                              |\n"
		"|       4) ﾂ 肭珞��� 蒻璢��琿�                               |\n"
		"|       5) ﾂ �瑰�鞣�                                         |\n"
		"|                                                            |\n"
		"|       >> ﾂ粢蒻�� 0, ���磊 粢������� �珸琅 <<               |\n"
		"|                                                            |\n");
	do {
		printf("| Answer: ");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 5));
	void(*fn)(int &a, int &b);
	fn = swap_yb;
	switch (sign)
	{
	case 0: {return; }
			break;
	case 1: {
		sort_str(M, N, a, fn);
	}
			break;
	case 2: {sort_stlb(M, N, a, fn); }
			break;
	case 3: {
		if (N == M) sort_pob_d(N, a, fn); }
			break;
	case 4: {if (N == M) sort_osn_d(N, a, fn); }
			break;
	case 5: {
		sort_all(M, N, a, fn);
	}
			break;
	}
}
void menu_sort_max(int a[m][n], int M, int N)
{
	int sign;
	printf(" 末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末\n"
		"|                                                            |\n"
		"|            >> ﾑ���頏�粲� �瑰�鞣� �� 粽銜瑰�瑙��<<          |\n"
		"|                                                            |\n"
		"|  >> ﾂ�砒�褪� 蒟鴦�粨�:                                     |\n"
		"|                                                            |\n"
		"|       1) ﾂ ������                                          |\n"
		"|       2) ﾂ ����磋�                                         |\n"
		"|       3) ﾂ ��碚���� 蒻璢��琿�                              |\n"
		"|       4) ﾂ 肭珞��� 蒻璢��琿�                               |\n"
		"|       5) ﾂ �瑰�鞣�                                         |\n"
		"|                                                            |\n"
		"|       >> ﾂ粢蒻�� 0, ���磊 粢������� �珸琅 <<               |\n"
		"|                                                            |\n");
	do {
		printf("| Answer: ");
		scanf("%d", &sign);
	} while ((sign < 0) || (sign > 5));
	void(*fn)(int &a, int &b);
	fn = swap_vozr;
	switch (sign)
	{
	case 0: {return;}
			break;
	case 1: {
		sort_str(M, N, a, fn);
	}
			break;
	case 2: {sort_stlb(M, N, a, fn); }
			break;
	case 3: {
		if (N==M) sort_pob_d(N, a, fn); }
			break;
	case 4: {if (N == M) sort_osn_d(N, a, fn); }
			break;
	case 5: {
		sort_all(M, N, a, fn);
	}
			break;
	}
}
void menu_change(int a[m][n], int M, int N)
{
	int sign;
	printf(" 末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末\n"
		"|                                                            |\n"
		"|                   >> ﾈ銕褊褊韃 �瑰�鞣� <<                  |\n"
		"|                                                            |\n"
		"|  >> ﾂ�砒�褪� 蒟鴦�粨�:                                     |\n"
		"|                                                            |\n"
		"|       1) ﾈ銕褊褊韃 ������                                  |\n"
		"|       2) ﾈ銕褊褊韃 ����磋�                                 |\n"
		"|       3) ﾈ銕褊褊韃 ��褌褊��                                |\n"
		"|       4) ﾓ萵�褊韃 ������                                   |\n"
		"|       5) ﾓ萵�褊韃 ����磋�                                  |\n"
		"|       6) ﾑ�褊� �����                                       |\n"
		"|       7) ﾑ�褊� ����磋��                                    |\n"
		"|                                                            |\n"
		"|       >> ﾂ粢蒻�� 0, ���磊 粢������� �珸琅 <<               |\n"
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
	case 4: {
		delete_str(M,N,a);
		//write(M,N,N,&a[0][0]);
	}
			break;
	case 5: {
		delete_str(M, N, a);
	}
			break;
	case 6: {
		change_line(a, M, N); 
	} break;
	case 7: {
		change_column(a, M, N); 
	} break;
	}
}
