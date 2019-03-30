#define _CRT_SECURE_NO_WARNINGS
#include "Menu.h"

int main()
{
	system("chcp 1251 > nul");

	int sort, M=0, N=0;
	int a[m][n];
	do {
		sort = menu(a, M, N);
	} while (sort != 0);

	return 0;
}
