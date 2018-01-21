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

	for(i=n-1;i>=1;i--)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+i])
			{
				temp=a[j];
				a[j]=a[j+i];
				a[j+i]=temp;
			}
		}
	}

	printf("\nSorted array is ");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);


	getch();
}
