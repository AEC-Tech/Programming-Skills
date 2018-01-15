#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10][10],i,j,r,c,sum=0;
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
			sum+=a[i][j];
		}
		printf("\n");
	}
	printf("\n\nSum of Matrix elements is %d",sum);
	getch();
}
