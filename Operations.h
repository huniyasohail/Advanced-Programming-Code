#include<iostream>
#include<fstream>
#include <stdio.h>
#include <string>
#include <ctype.h>
using namespace std;

void Addition(int l,int k ,int first[10][10],int m,int n ,int second[10][10],int sum[10][10]);
void Subtraction(int l,int k ,int first[10][10],int m,int n ,int second[10][10],int sum[10][10]);
void multiplication(int x,int y,int a[10][10],int m, int n,int b[10][10],int c[10][10]);
void multiplication(int x,int y,int a[10][10],int m, int n,int b[10][10],int c[10][10]){
	int i,j;
/*	int a[10][10], b[10][10], c[10][10];
	int x, y, i, j, m, n;


	cout << "\nEnter the number of rows and columns for Matrix A:::\n\n";
	cin >> x >> y;

	// x denotes number rows in matrix A
	// y denotes number columns in matrix A

	cout << "\n\nEnter elements for Matrix A :::\n\n";

	for (i = 0; i<x; i++)
	{
		for (j = 0; j<y; j++)
		{
			cin >> a[i][j];
		}
		cout << "\n";
	}


	*///print matrix A
	cout << "\n\nMatrix A :\n\n";

	for (i = 0; i<x; i++)
	{
		for (j = 0; j<y; j++)
		{
			cout << "\t" << a[i][j];
		}
		cout << "\n\n";
	}

	cout << "\n-----------------------------------------------------------\n";
	/*
	cout << "\nEnter the number of rows and columns for Matrix B:::\n\n";
	cin >> m >> n;

	// m denotes number rows in matrix B
	// n denotes number columns in matrix B


	cout << "\n\nEnter elements for Matrix B :::\n\n";

	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			cin >> b[i][j];
		}
		cout << "\n";
	}

	*///print matrix B
	cout << "\n\nMatrix B :\n\n";

	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			cout << "\t" << b[i][j];
		}
		cout << "\n\n";
	}
	//check the dimensions of matrices
	if (y == m)
	{

		for (i = 0; i<x; i++)
		{
			for (j = 0; j<n; j++)
			{
				c[i][j] = 0;
				for (int k = 0; k<m; k++)
				{
					c[i][j] = c[i][j] + a[i][k] * b[k][j];
				}
			}
		}

		cout << "\n-----------------------------------------------------------\n";

		cout << "\n\nMultiplication of Matrix A and Matrix B :\n\n";

		for (i = 0; i<x; i++)
		{
			for (j = 0; j<n; j++)
			{
				cout << "\t" << c[i][j];
			}
			cout << "\n\n";
		}
	}
	else
	{
		cout << "\n\nMultiplication is not possible";
	}
	
}
void Subtraction(int l,int k ,int first[10][10],int m,int n ,int second[10][10],int sum[10][10]){
//	 int m, n, c, d, first[10][10], second[10][10], sum[10][10];
//	int k ,l;
  /*
	cout << "Enter the number of rows and columns of matrix ";
   cin >> m >> n;
   cout << "Enter the elements of first matrix\n";
 
   for (  c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         cin >> first[c][d];

   cout << "Enter the number of rows and columns of matrix ";
   cin >> l >> k;
   cout << "Enter the elements of second matrix\n";
 
   for ( c = 0 ; c < l ;c++ )
      for ( d = 0 ; d < k ; d++ )
            cin >> second[c][d];*/
	int c,d;
	//check the dimension of matrix
 if(l==m && k==n ){
   for ( c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         sum[c][d] = first[c][d] + second[c][d];
 
   cout << "Sum of entered matrices:-\n";
 //print the result after the operation
   for ( c = 0 ; c < m ; c++ )
   {
      for ( d = 0 ; d < n ; d++ )
         cout << sum[c][d] << "\t";
 
      cout << endl;
   }
 }
 else
	 cout<<"Dimension of matrices are not same\n\n";
}
void Addition(int l,int k ,int first[10][10],int m,int n ,int second[10][10],int sum[10][10]){
//	 int m, n, c, d, first[10][10], second[10][10], sum[10][10];
//	int k ,l;
  /*
	cout << "Enter the number of rows and columns of matrix ";
   cin >> m >> n;
   cout << "Enter the elements of first matrix\n";
 
   for (  c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         cin >> first[c][d];

   cout << "Enter the number of rows and columns of matrix ";
   cin >> l >> k;
   cout << "Enter the elements of second matrix\n";
 
   for ( c = 0 ; c < l ;c++ )
      for ( d = 0 ; d < k ; d++ )
            cin >> second[c][d];*/
	int c,d;
	//check the dimension of matrix
 if(l==m && k==n ){
   for ( c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         sum[c][d] = first[c][d] + second[c][d];
 
   cout << "Sum of entered matrices:-\n";
 
   for ( c = 0 ; c < m ; c++ )
   {
      for ( d = 0 ; d < n ; d++ )
         cout << sum[c][d] << "\t";
 
      cout << endl;
   }
 }
 else
	 cout<<"Dimension of matrices are not same\n\n";
}