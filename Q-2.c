//Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
//For example,
//Input:
//Enter array's size: 2
//
//Enter array elements:
//a[0][0] = 3
//a[0][1] = 2
//a[1][0] = 5
//a[1][1] = 4
//
//Output:
//Cubes of all elements:
//27    8
//125 64
#include<stdio.h>
int cube(int *p){

   p=&cube;
   return *p;
}
void main()
{
	int n;
	int a[n][n];
	printf("enter the array size:");
	scanf("%d",&n);

	int i,j;
	int cube=0;
	int *p;

	printf("enter the array element:\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cube=a[i][j]*a[i][j]*a[i][j];
			p=&cube;		
			printf("cube of all elements:%d\n",*p);
			
		}
		
	}
	
}
