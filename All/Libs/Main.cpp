#define _CRT_SECURE_NO_WARNINGS
#include "../Header/Functions.h"

int main()
{
	system("chcp 1251 > nul");

	int sign, M=0, N=0;
	int a[m][n];
	
	do {
		printf(" 末末末末末末末末末末末末末末末末末末末末末末末末末末末末末末\n"
				"|                                                            |\n"
				"|                         >> ﾌ褊� <<                         |\n"
				"|                                                            |\n"
				"|  >> ﾂ�砒�褪� 蒟鴦�粨�:                                     |\n"
				"|                                                            |\n"
				"|       1) ﾂ粽� �瑰�鞣�                                      |\n"
				"|       2) ﾂ�粽� �瑰�鞣�                                     |\n"
				"|       3) ﾈ銕褊褊韃 �瑰�鞣�                                 |\n"
				"|       4) ﾑ���頏�粲� �瑰�鞣� �� �磊籵���                    |\n"
				"|       5) ﾑ���頏�粲� �瑰�鞣� �� 粽銜瑰�瑙��                 |\n"
				"|       6) ﾏ�頌� �瑕�韲琿���胛 ��褌褊��                      |\n"
				"|       7) ﾏ�頌� �竟韲琿���胛 ��褌褊��                       |\n"
				"|       8) ﾏ�蓴�褪 ���顆褥�籵 ����跖�褄���� ��褌褊���        |\n"
				"|       9) ﾏ�蓴�褪 ���顆褥�籵 ���頽瑣褄���� ��褌褊���        |\n"
				"|                                                            |\n"
				"|       >> ﾂ粢蒻�� 0, ���磊 糺鶯� 韈 ���胙瑟�� <<            |\n"
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
