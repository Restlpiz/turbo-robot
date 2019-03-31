#ifndef Menu_h
#define Menu_h

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

const int m = 100, n = 100;
// M - строка, N - столбец.

void menu_max(int a[m][n], int M, int N);
void menu_min(int a[m][n], int M, int N);
void menu_sort_min(int a[m][n], int M, int N);
void menu_sort_max(int a[m][n], int M, int N);
void menu_change(int a[m][n], int M, int N);
void menu_plus(int a[m][n], int M, int N);
void menu_minus(int a[m][n], int M, int N);

#endif
