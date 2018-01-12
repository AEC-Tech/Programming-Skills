#include<stdio.h>
#include<conio.h>
void main()
{
	int  a[20],n,i,j,temp;
	clrscr();
	printf("\nHow many numbers are there ");
	scanf("%d",&n);
	printf("\nEnter the array elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	printf("\nSorted array is ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);


	getch();
}
