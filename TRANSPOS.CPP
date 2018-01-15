#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10][10],i,j,r,c;
	clrscr();
	printf("\nHow many rows and columns are there ");
	scanf("%d%d",&r,&c);
	printf("\nEnter the matrix elements ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n\nEntered Matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\nTranspose of Matrix is \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}

	getch();
}
