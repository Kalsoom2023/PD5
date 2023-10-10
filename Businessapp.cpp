#include<iostream>
#include<conio.h>
using namespace std;
void header();
int menu();
void viewFlight();
void bookFlight();
void Multan();
void Lahore();
void Islamabad();
void Karachi();
void cancelFlight();
main()

{
header();
while(true)
{
int choice;
string destination;
menu();
cout<<"Choice:";
cin>> choice;

if (choice==1)
{
	system("cls");
viewFlight();
}
if(choice==2)
{
	system("cls");
bookFlight();
string destination;
cout<<"Enter the Flight Destination(Lahore,Multan,Karachi,Islamabad): ";
cin>> destination;;
	
if(destination=="Lahore")
{system("cls");
	Lahore();
}
if(destination=="Multan")
{
	system("cls");
	Multan();
}
	
	

if(destination=="Islamabad")
{
	system("cls");
	Islamabad();
}
if(destination=="Karachi")
{
	system("cls");
Karachi();
}
}
if(choice==3)
{
	system("cls");
cancelFlight();
}
}
}

void header()
{


cout<<"             WELCOME                "<<endl;
cout<<"                  TO                "<<endl;
cout<<"                   FLIGHT           "<<endl;
cout<<"                        MANAGEMENT  "<<endl;
cout<<"                               SYSTEM  "<<endl;
}
int menu()
{
cout<<"Enter 1 to view all flights: "<<endl;
cout<<"Enter 2 to book seat: "<<endl;
cout<<"Enter 3 to cancel your seat: "<<endl;
}
void viewFlight()
	{
cout<<"You want to see available flights"<<endl;
cout<<" 	FlightNo 	Date		Time		PricePerSeat		From		Destination"<<endl;

cout<<"	1980		1/12/23	        1 pm            5000/-PKR		Lahore		Karachi    "<<endl;
cout<<"	1235		2/12/23	        7 pm            3000/-PKR		Karachi		Islamabad  "<<endl;
cout<<"	8790		3/12/23	        8 am            4800/-PKR		Lahore		Multan     "<<endl;
cout<<"	2340		4/12/23	        5 pm            2000/-PKR		Sialkot		Lahore     "<<endl;
cout<<"	1954		5/12/23	        9.30am          4000/-PKR		Murree		Multan     "<<endl;
}
void bookFlight()
{

cout<<"You want to book flight"<<endl;

}
void Lahore()
{
	cout<<endl;
cout<<"Following are the details of your flight: "<<endl;
cout<<"	FlightNo 	Date		Time		PricePerSeat		From		Destination	"<<endl;
cout<<"	2340		4/12/23	        5 pm            2000/-PKR		Sialkot		Lahore          "<<endl;
cout<<"Your flight has been booked"<<endl;
cout<<endl;
cout<<"Press enter to go to main menu:";
	getch();
	cout<<endl;
	system("cls");

}
void Multan()
{
		int no;
	cout<<endl;
	cout<<"Following are the details of your flight: "<<endl;
	cout<<"	FlightNo 	Date		Time		PricePerSeat		From		Destination	"<<endl;
	cout<<"	8790		3/12/23	        8 am            4800/-PKR		Lahore		Multan     "<<endl;
	cout<<"	1954		5/12/23	        9.30am          4000/-PKR		Murree		Multan     "<<endl;
	cout<<"Enter the flight no you want to reserve:";
	cin>>no;
	cout<<"Your flight has been booked"<<endl;
	cout<<endl;
	cout<<"Press enter to go to main menu:";
	getch();
	cout<<endl;
	system("cls");

}
void Islamabad()
{
		cout<<endl;
cout<<"Following are the details of your flight: "<<endl;	
cout<<"	FlightNo 	Date		Time		PricePerSeat		From		Destination	"<<endl;
cout<<"	1235		2/12/23	        7 pm            3000/-PKR		Karachi		Islamabad  "<<endl;
cout<<"Your flight has been booked"<<endl;
cout<<endl;
cout<<"Press enter to go to main menu:";
	getch();
	cout<<endl;
	system("cls");

}
void Karachi()
{
	cout<<endl;
	cout<<"Following are the details of your flight: "<<endl;	
cout<<"	FlightNo 	Date		Time		PricePerSeat		From		Destination	"<<endl;
cout<<"	1980		1/12/23	        1 pm            5000/-PKR		Lahore		Karachi    "<<endl;
cout<<"Your flight has been booked"<<endl;
cout<<endl;
cout<<"Press enter to go to main menu:";
	getch();
	cout<<endl;
	system("cls");

}
void cancelFlight()
{
	int flightNo,seat_No;
cout<<"You want to cancel flight"<<endl;
cout<<"Enter your flightNo: ";
cin>> flightNo;
if((flightNo==1980)||(flightNo==1235)||(flightNo==8790)||(flightNo==2340)||(flightNo==1954))
{

cout<<"Your seat for flight "<<flightNo<<"  has been cancelled"<<endl;
cout<<endl;
cout<<"Press enter to go to main menu:";
	getch();
	cout<<endl;
	system("cls");
}
else
{


	cout<<"YOU ENTERED WRONG NUMBER"<<endl;
	cout<<"Press enter to go to main menu:";
	getch();
	cout<<endl;
	system("cls");

	
}
}


