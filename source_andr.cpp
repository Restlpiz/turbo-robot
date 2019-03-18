#include <iostream>
void delete_str(int &N,int M, int *A,int k);
void delete_stlb(int N,int &M, int *A,int k);
void swap_str(int M, int *A,int k);
void swap_stlb(int N,int M, int *A,int k);
void swap(int &a,int &b);
void write(int N,int M,int M1, int *A);
void swap_yb(int &a,int &b);
void swap_vozr(int &a,int &b);
void sort_all (int N,int M,int *A,void (*fn)(int &a,int &b));
void sort_osn_d(int N,int *A,void (*fn)(int &a,int &b));
void sort_pob_d(int N,int *A,void (*fn)(int &a,int &b));
void sort_str(int N,int M,int k,int *A,void (*fn)(int &a,int &b));
void sort_stlb(int N,int M,int k,int *A,void (*fn)(int &a,int &b));
int main(){
	int N=3,M=3;
	int M1=M;
	//M1 предназначена для того, чтобы функция write работала, когда мы изменили количество столбцов (необходимо помнить, сколько было столбцов первоначально)
	int A[3][3]={{1,0,9},{3,5,4},{1,6,4}};
	int k=0;
	write(N,M,M1,&A[0][0]);
	//delete_str(N,M1,&A[0][0],k);
	//delete_stlb(N,M1,&A[0][0],k);
	void (*fn)(int &a,int &b);
	fn=swap_yb;
	//fn=swap_vozr;
	//sort_all(N,M,&A[0][0],fn);
	sort_stlb(N,M,1,&A[0][0],fn);
	write(N,M,M1,&A[0][0]);
	
	return 0;
}
void write(int N,int M,int M1, int *A){
	for(int i=0;i<N;i++){
		for(int j=0;j<M1;j++){
			std::cout<<A[i*M+j]<<' ';
			//std::cout<<j<<' ';
		}
		std::cout<<'\n';
	}
}

void delete_stlb(int N,int &M, int *A,int k){
	for (int i=k;i<M-1;i++){
		swap_stlb(N,M,A,i);
	}
	M--;
}

void delete_str(int &N,int M, int *A,int k){
	for (int i=k;i<N-1;i++){
		swap_str(M,A,i);
	}
	N--;
}

void swap_str(int M, int *A, int k){
	for(int i=0;i<M;i++){
		swap(A[k*M+i],A[(k+1)*M+i]);
	}
}

void swap_stlb(int N,int M, int *A, int k){
	for(int i=0;i<N;i++){
		//std::cout<<A[k+i*M]<<' '<<A[k+1+i*M]<<'\n';
		swap(A[k+i*M],A[k+1+i*M]);
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

void sort_all(int N,int M, int *A,void (*fn)(int &a,int &b)){
	for (int i=0;i<N*M-1;i++){
		for (int j=i+1;j<N*M;j++){
			(*fn)(A[i],A[j]);
		}
	}
}

void sort_osn_d (int N,int *A,void (*fn)(int &a,int &b)){
	for (int i=0;i<N-1;i++){
		for (int j=i+1;j<N;j++){
			(*fn)(A[i*N+i],A[j*N+j]);
		}
	}
}

void sort_pob_d(int N,int *A,void (*fn)(int &a,int &b)){
	for (int i=0;i<N-1;i++){
		for (int j=i+1;j<N;j++){
			(*fn)(A[(N-i)*N+i],A[(N-j)*N+j]);
		}
	}
}

void sort_str(int N,int M,int k,int *A,void (*fn)(int &a,int &b)){
	for(int i=0;i<M;i++){
		for(int j=i+1;j<M;j++){
			(*fn)(A[k*M+i],A[k*M+j]);
		}
	}
}
void sort_stlb(int N,int M,int k,int *A,void (*fn)(int &a,int &b)){
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			(*fn)(A[i*M+k],A[j*M+k]);
		}
	}
}
