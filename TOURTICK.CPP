#include<fstream.h>
#include<stdio.h>
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
class Ticket
{
	char name[50];
	int bid;
	char desination[100];
	char time[50];
	int fare;
	public:
	Ticket()
	{
	}
	void generate()
	{
	}
	void display()
	{
	}
};
void TourBus::input()
{
	cout<<"Enter bus id ";
	cin>>bid;
	cout<<"Enter bus destination ";
	gets(destination);
	cout<<"Enter time of bus ";
	cin>>time;
}
void TourBus::display()
{
	cout<<bid<<"\t"<<destination<<"\t"<<time<<"\t"<<max_seats<<"\t"<<booked<<"\n";
}
void TourBus::show()
{
	cout<<"Bus Id "<<bid<<endl;
	cout<<"Desination "<<destination<<endl;
	cout<<"Time "<<time<<endl;
	cout<<"No. of seats remaining "<<max_seats-booked<<endl;
}
void main()
{
	int ch;
	fstream F,G;
	TourBus b;
	do
	{
		cout<<"Press 1 - Add a New Tour Bus"<<endl;
		cout<<"Press 2 - Show Selected Bus"<<endl;
		cout<<"Press 3 - Display All Buses"<<endl;
		cout<<"Press 4 - Delete a Bus"<<endl;
		cout<<"Press 5 - Book a ticket "<<endl;
		cout<<"Press 6 - Display Booked Tickets "<<endl;
		cout<<"Press 7 - Exit "<<endl;
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
		case 2:
			int id,chk=0;
			cout<<"Enter the bus id to be displayed ";
			cin>>id;
			F.open("tour.dat",ios::in | ios::binary);
			if(F.fail())
				cout<<"Can't open file "<<endl;
			else
			{
				while(F.read((char*)&b,sizeof(b)))
				{
					if(b.getid()==id)
					{
						b.show();
						chk=1;
						break;
					}
				}
				if(chk==0)
					cout<<"Bus not Found"<<endl;
			}
			F.close();
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
		case 4:
			chk=0;
			cout<<"Enter the bus id to be deleted ";
			cin>>id;
			F.open("tour.dat",ios::in | ios::binary);
			G.open("temp.dat",ios::out | ios::binary);
			if(F.fail())
				cout<<"Can't open file "<<endl;
			else
			{
				while(F.read((char*)&b,sizeof(b)))
				{
					if(b.getid()!=id)
					{
					G.write((char*)&b,sizeof(b));
					}
					else
					{
						b.show();
						chk=1;

					}
				}
				if(chk==0)
					cout<<"Bus not Found"<<endl;

				else
					cout<<"Bus Deleted "<<endl;
			}
			F.close();
			G.close();
			remove("tour.dat");
			rename("temp.dat","tour.dat");
			break;

		}
	}while(ch!=7);
}
