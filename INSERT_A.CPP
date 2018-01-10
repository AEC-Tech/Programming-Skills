#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10]={34,78,12,90,55,67};
	int i,num,pos,n=6;
	clrscr();
	printf("\nArray before insertion is \n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);

	printf("\nEnter the number to be inserted and its position ");
	scanf("%d%d",&num,&pos);

	for(i=n;i>pos-1;i--)
		a[i]=a[i-1];
	a[pos-1]=num;
	n++;

	printf("\n\nAfter insertion array is \n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	getch();

}