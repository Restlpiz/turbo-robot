#include<stdio.h>

#define m 3
#define n 3

double min_str(double arr[][m]/*, int m, int n*/)
{
	int k, i, j;
	printf("Choose the string\n");
	scanf("%d",&k);
	double min = arr[k][0];
	
	for(i = 1; i < m; i++)
	{
		if(arr[k][i] < min)
		{
			min = arr[k][i]; 	
		} 
	}
	return min;
}

double max_str(double arr[][m]/*, int m, int n*/)
{
	int k, i, j;
	printf("Choose the string\n");
	scanf("%d",&k);
	double max = arr[k][0];
	
	for(i = 1; i < n; i++)
	{
		if(arr[k][i] > max)
		{
			max = arr[k][i]; 	
		} 
	}
	return max;
}

double min_col(double arr[][m]/*, int m, int n*/)
{
	int k, i, j;
	printf("Choose the column\n");
	scanf("%d",&k);
	double min = arr[0][k];
	
	for(i = 1; i < n; i++)
	{
		if(arr[i][k] < min)
		{
			min = arr[i][k]; 	
		} 
	}
	return min;
}

double max_col(double arr[][m]/*, int m, int n*/)
{
	int k, i, j;
	printf("Choose the column\n");
	scanf("%d",&k);
	double max = arr[0][k];
	
	for(i = 1; i < m; i++)
	{
		if(arr[i][k] > max)
		{
			max = arr[i][k]; 	
		} 
	}
	return max;
}

double min_main_diag(double arr[][m]/*, int m, int n*/)
{
	int i;
	double min = arr[0][0];
	for(i = 0; i < m; i++)
	{
		if(arr[i][i] < min)
		{
			min = arr[i][i];
		}
	}
	return min;
}

double max_main_diag(double arr[][m]/*, int m, int n*/)
{
	int i;
	double max = arr[0][0];
	for(i = 0; i < m; i++)
	{
		if(arr[i][i] > max)
		{
			max = arr[i][i];
		}
	}
	return max;
}

double min_side_diag(double arr[][m]/*, int m, int n*/)
{
	int i,j;
	double min = arr[0][n-1];
	for(i = 0, j = n - 1; j >= 0; i++,j--)
	{
		if(arr[i][j] < min)
		{
			min = arr[i][j];
		}
	}
	return min;
}

double max_side_diag(double arr[][m]/*, int m, int n*/)
{
	int i,j;
	double max = arr[0][n-1];
	for(i = 0, j = n - 1; j >= 0; i++,j--)
	{
		if(arr[i][j] > max)
		{
			max = arr[i][j];
		}
	}
	return max;
}

double min_all(double arr[][m]/*, int m, int n*/)
{
	int i, j;
	double min = arr[0][0];
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}
	
	return min;
}
double max_all(double arr[][m]/*, int m, int n*/)
{
	int i, j;
	double max = arr[0][0];
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	
	return max;
}


//int main()
//{
//	int i, j;
//	double arr[n][m],a;
//	
//	
//	printf("Enter the array\n");
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < m; j++)
//		{
//			scanf("%lf",&arr[i][j]);
//		}
//	}
//	
//	for(i = 0; i < n; i++)
//	{
//		for(j = 0; j < m; j++)
//		{
//			printf("%lf ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	
//	a = max_all(arr);
//	printf("%lf",a);
//	
//	
//}



