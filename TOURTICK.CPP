#include<fstream.h>
#include<conio.h>
#include<string.h>
class TourBus
{       int bid;
	char destination[200];
	char time[50];
	int max_seats;
	int booked;
	public:
	TourBus()
	{
	bid=0;
	max_seats=50;
	booked=0;
	strcpy(time,"9:10am");
	strcpy(destination,"");
	}
	void input();
	void show();
	void display();
	int getid()
	{
	return bid;
	}
	char* getDestination()
	{
	return destination;
	}
	char* getTime()
	{
	return time;
	}
	int getBooked(){
	return booked;
	}
	int getMax(){
	return max_seats;
	}
};
void TourBus::input()
{
	cout<<"Enter bus id ";
	cin>>bid;
	cout<<"Enter bus destination ";
	cin>>destination;
	cout<<"Enter time of bus ";
	cin>>time;
}
void TourBus::display()
{
	cout<<bid<<"\t"<<destination<<"\t"<<time<<"\t"<<max_seats<<"\t"<<booked<<"\n";
}
void TourBus::show()
{
}
void main()
{
	int ch;
	fstream F;
	TourBus b;
	do
	{
		cout<<"Press 1 - Add a New Tour Bus"<<endl;
		cout<<"Press 2 - Show Selected Bus"<<endl;
		cout<<"Press 3 - Display All Buses"<<endl;
		cout<<"Press 4 - Delete a Bus"<<endl;
		cout<<"Press 5 - Book a ticket "<<endl;
		cout<<"Press 6 - Exit "<<endl;
		cout<<"Enter your choice ";
		cin>>ch;
		switch(ch)
		{
		case 1:
			F.open("tour.dat",ios::app | ios::binary);
			b.input();
			F.write((char*)&b, sizeof(b));
			F.close();
			cout<<"Bus added Successfully "<<endl;
			getch();
			clrscr();

		break;
		case 3:
			F.open("tour.dat",ios::in | ios::binary);
			if(F.fail())
				cout<<"Can't open file "<<endl;
			else
			{
				while(F.read((char*)&b,sizeof(b)))
					b.display();
			}
			F.close();
			cout<<"Press a key to continue ";
			getch();
			clrscr();
		break;
		}
	}while(ch!=6);
}
