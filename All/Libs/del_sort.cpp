#include "../Header/Functions.h"


void write(int N,int M,int M1, int *A){
	for(int i=0;i<N;i++){
		for(int j=0;j<M1;j++){
			std::cout<<A[i*M+j]<<' ';
			//std::cout<<j<<' ';
		}
		std::cout<<'\n';
	}
}

void delete_stlb(int N,int &M, int A[m][n]){
	int k;
	std::cout << "¬ведите номер столбца, который хотите удалить:";
	do {
		std::cin >> k;
	} while (k > M);
	for (int i=k;i<M-1;i++){
		swap_stlb(N,M,A,i);
	}
	M--;
}

void delete_str(int &N,int M, int A[m][n]){
	int k;
	std::cout << "¬ведите номер строки, которую хотите удалить:";
	do {
		std::cin >> k;
	} while (k>N);
	for (int i=k;i<N-1;i++){
		swap_str(M,A,i);
	}
	N--;
}

void swap_str(int M, int A[m][n],int k){
	for(int i=0;i<M;i++){
		swap(A[k][i],A[k+1][i]);
	}
}

void swap_stlb(int N,int M, int A[m][n], int k){
	for(int i=0;i<N;i++){
		//std::cout<<A[k+i*M]<<' '<<A[k+1+i*M]<<'\n';
		swap(A[i][k],A[i][k+1]);
		//std::cout<<A[k+i*M]<<' '<<A[k+1+i*M]<<'\n';
	}
}

void swap(int &a,int &b){
	int x=a;
	a=b;
	b=x;
}

void swap_yb(int &a,int &b){
	if (a<b){ swap(a,b);}
}

void swap_vozr(int &a,int &b){
	if (a>b){ swap(a,b);}	
}

void sort_all(int N,int M, int A[m][n],void (*fn)(int &a,int &b)){
	for (int i=0;i<N*M-1;i++){
		for (int j=i+1;j<N*M;j++){
			(*fn)(A[i/M][i%M],A[j/M][j%M]);
		}
	}
}

void sort_osn_d (int N,int A[m][n],void (*fn)(int &a,int &b)){
	for (int i=0;i<N-1;i++){
		for (int j=i+1;j<N;j++){
			(*fn)(A[i][i],A[j][j]);
		}
	}
}

void sort_pob_d(int N,int A[m][n],void (*fn)(int &a,int &b)){
	for (int i=0;i<N-1;i++){
		for (int j=i+1;j<N;j++){
			(*fn)(A[i][N-i-1],A[j][N-j-1]);
		}
	}
}

void sort_str(int N,int M,int A[m][n],void (*fn)(int &a,int &b)){
	int k;
	std::cout << "¬ведите номер строки, которую хотите отсортировать:";
	do {
		std::cin >> k;
	} while (k > N);
	for(int i=0;i<M;i++){
		for(int j=i+1;j<M;j++){
			(*fn)(A[k][i],A[k][j]);
		}
	}
}
void sort_stlb(int N,int M,int A[m][n],void (*fn)(int &a,int &b)){
	int k;
	std::cout << "¬ведите номер столбца, который хотите удалить:";
	do {
		std::cin >> k;
	} while (k > M);
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			(*fn)(A[i][k],A[j][k]);
		}
	}
}
