#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10][10],i,j,n,sum=0;
	clrscr();
	printf("\nEnter the size of the matrix ");
	scanf("%d",&n);
	printf("\nEnter the matrix elements ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\n\nEntered Matrix is \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
			if(i==j || i+j==n-1)
			sum+=a[i][j];
		}
		printf("\n");
	}
	printf("\n\nSum of Diagonal elements is %d",sum);
	getch();
}
