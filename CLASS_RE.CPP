#include<iostream.h>
#include<conio.h>
class Rectangle
{
	int l,b;
	public:
	void input()
	{
		cout<<"Enter length and breath ";
		cin>>l>>b;
	}
	void show()
	{
		cout<<"length is "<<l<<" and breadth is "<<b<<endl;
	}
	void area()
	{
		cout<<"Area is "<<l*b<<endl;
	}
	void per()
	{
		cout<<"Perimeter is "<<2*(l+b)<<endl;
	}
};
void main()
{
	clrscr();
	Rectangle r1,r2;
	r1.input();
	r2.input();
	r1.show();
	r1.area();
	r1.per();

	r2.show();
	r2.area();
	r2.per();

	getch();
}


