#include<stdio.h>

#define m 3
#define n 3

int mins_str(double arr[][m]/*, int m, int n*/)
{
	int k, i, j, c = 0;
	printf("Choose the string\n");
	scanf("%d",&k);
	
	for(i = 0; i < m; i++)
	{
		if(arr[k][i] < 0)
			c++;
	}
	return c;
}

int plus_str(double arr[][m]/*, int m, int n*/)
{
	int k, i, j, c = 0;
	printf("Choose the string\n");
	scanf("%d",&k);
	
	for(i = 0; i < n; i++)
	{
		if(arr[k][i] > 0)
			c++; 
	}
	return c;
}

int mins_col(double arr[][m]/*, int m, int n*/)
{
	int k, i, j, c = 0;
	printf("Choose the column\n");
	scanf("%d",&k);
	
	for(i = 0; i < n; i++)
	{
		if(arr[i][k] < 0)
			c++;
	}
	return c;
}

int plus_col(double arr[][m]/*, int m, int n*/)
{
	int k, i, j, c = 0;
	printf("Choose the column\n");
	scanf("%d",&k);
	
	for(i = 0; i < m; i++)
	{
		if(arr[i][k] > 0)
			c++; 
	}
	return c;
}

int mins_main_diag(double arr[][m]/*, int m, int n*/)
{
	int i, c = 0;
	for(i = 0; i < m; i++)
	{
		if(arr[i][i] < 0)
			c++;
	}
	return c;
}

int plus_main_diag(double arr[][m]/*, int m, int n*/)
{
	int i, c = 0;
	for(i = 0; i < m; i++)
	{
		if(arr[i][i] > 0)
			c++;
	}
	return c;
}

int mins_side_diag(double arr[][m]/*, int m, int n*/)
{
	int i, j, c = 0;
	for(i = 0, j = n - 1; j >= 0; i++,j--)
	{
		if(arr[i][j] < 0)
			c++;
	}
	return c;
}

int plus_side_diag(double arr[][m]/*, int m, int n*/)
{
	int i, j, c = 0;
	for(i = 0, j = n - 1; j >= 0; i++,j--)
	{
		if(arr[i][j] > 0)
			c++;
	}
	return c;
}

int mins_all(double arr[][m]/*, int m, int n*/)
{
	int i, j, c = 0;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(arr[i][j] < 0)
				c++;
		}
	}
	
	return c;
}
int plus_all(double arr[][m]/*, int m, int n*/)
{
	int i, j, c = 0;;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(arr[i][j] > 0)
				c++;
		}
	}
	
	return c;
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
//	a = plus_all(arr);
//	printf("%lf",a);
//	
//	
//}



