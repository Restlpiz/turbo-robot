#ifndef Functions_h
#define Functions_h
#include "Menu.h"

// Ввод_вывод
void read_M_N(int *p_M, int *p_N);
void read(int a[m][n], int M, int N);
void end_a(int a[m][n], int M, int N);

// Изменение элементов массива
void line_replacement(int a[m][n], int M, int N);
void column_replacement(int a[m][n], int M, int N);
void element_replacement(int a[m][n], int M, int N);
void change_line(int a[m][n], int M, int N);
void change_column(int a[m][n], int M, int N);

// Максимум_минимум
void min_str(int a[m][n], int M, int N);
void max_str(int a[m][n], int M, int N);
void min_col(int a[m][n], int M, int N);
void max_col(int a[m][n], int M, int N);
void min_main_diag(int a[m][n], int M, int N);
void max_main_diag(int a[m][n], int M, int N);
void min_side_diag(int a[m][n], int M, int N);
void max_side_diag(int a[m][n], int M, int N);
void min_all(int a[m][n], int M, int N);
void max_all(int a[m][n], int M, int N);

// Количество положительных_отрицательных элементов
void mins_str(int a[m][n], int M, int N);
void plus_str(int a[m][n], int M, int N);
void mins_col(int a[m][n], int M, int N);
void plus_col(int a[m][n], int M, int N);
void mins_main_diag(int a[m][n], int M, int N);
void plus_main_diag(int a[m][n], int M, int N);
void mins_side_diag(int a[m][n], int M, int N);
void plus_side_diag(int a[m][n], int M, int N);
void mins_all(int a[m][n], int M, int N);
void plus_all(int a[m][n], int M, int N);

// удаление и сортировка
void delete_str(int &N, int M, int A[m][n]);
void delete_stlb(int N, int &M, int A[m][n]);
void swap_str(int M, int A[m][n], int k);
void swap_stlb(int N, int M, int A[m][n], int k);
void swap(int &a, int &b);
void write(int N, int M, int M1, int *A);
void swap_yb(int &a, int &b);
void swap_vozr(int &a, int &b);
void sort_all(int N, int M, int A[m][n], void(*fn)(int &a, int &b));
void sort_osn_d(int N, int A[m][n], void(*fn)(int &a, int &b));
void sort_pob_d(int N, int A[m][n], void(*fn)(int &a, int &b));
void sort_str(int N, int M, int A[m][n], void(*fn)(int &a, int &b));
void sort_stlb(int N, int M, int A[m][n], void(*fn)(int &a, int &b));
#endif
