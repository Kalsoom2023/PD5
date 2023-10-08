#include<iostream>
using namespace std;

	int value1=10;
	int value2=20;
	int sum()
{
 value1=40;
 return value1+value2;
}
main()
{
	int x=value1;
	value1=100;
	x=20;
	value2=sum();
	cout<<value1<<" "<<value2;
}
//TASK2
#include<iostream>
#include<cmath>
using namespace std;
string pyramidVolume(int length,int width,int height,string outputUnit);
main()
{
	float length,width,height;
	string result,outputUnit;
	cout<<"Enter the length of the pyramid (in meters): ";
	cin>> length;
	cout<<"Enter the width of the pyramid (in meters): ";
	cin>> width;
	cout<<"Enter the height of the pyramid (in meters): ";
	cin>> height;
	cout<<"Enter the desired output unit(milimeters, centimeters, meters, kilometers): ";
	cin>>outputUnit;
	result=pyramidVolume(length, width,height, 	outputUnit);
cout<<result;
}
	string pyramidVolume(int length,int width,int 	height,string outputUnit)
{
string a= "The volume of the pyramid is: ";
string b="The volume of the pyramid is: " ;
string c="The volume of the pyramid is: " ;
string d="The volume of the pyramid is: " ;
if(outputUnit=="meters")
{
float volume1=(length*width*height)/3;
	return a + to_string(volume1)+" cubic meters";
}
if(outputUnit=="kilometers")
{
	float volume2=((length/1000)*(width/1000)*(height/1000))/3;
	return b+ to_string(volume2)+" cubic kilometers";
}
if(outputUnit=="centimeters")
{
float volume3=((length*100)*(width*100)*(height*100))/3;
	return c+ to_string(volume3)+" cubic centimeters";
}
if(outputUnit=="milimeters")
{
float volume4=((length*1000)*(width*1000)*(height*1000))/3;
	return d+ to_string(volume4)+" cubic milimeters";
}
return "";
}

//TASK3
#include<iostream>
using namespace std;
float taxCalculator(char type, float price);
main()
{
	char type;
	float price;
	string result;
	cout<<"Enter the vehicle type code('M', 'E', 'S', 'V', 'T'): ";
	cin>> type;
	cout<<"Enter the price of the vehicle: $";
	cin>>price;
	result=taxCalculator(type,price);
	cout<< result;
}
float taxCalculator(char type, float price)
{
if(type=='M')
{
	double taxAmount=price*6/100;
	double totalPrice=taxAmount+price;
	cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<totalPrice<<".00";
}
if(type=='E')
{
	float taxAmount1=price*8/100;
	float totalPrice1=taxAmount1+price;
	cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<totalPrice1<< ".00";
}
if(type=='S')
{
	float taxAmount2=price*10/100;
	float totalPrice2=taxAmount2+price;
	cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<totalPrice2<<".00";
}
if(type=='V')
{
	float taxAmount3=price*12/100;
	float totalPrice3=taxAmount3+price;
	cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<totalPrice3<<".00";
}
if(type=='T')
{
	float taxAmount4=price*15/100;
	float totalPrice4=taxAmount4+price;
	cout<<"The final price of a vehicle of type "<<type<<" after adding the tax is $"<<totalPrice4<<".00";
}
return 0;
}


//TASK4
#include<iostream>
#include<cmath>
#include<string>
using namespace std;
string projectTimeCalculation(int hours,float days,int noOfWorkers);
main()
{
	float hours,days,noOfWorkers;
	string result;
	cout<<"Enter the needed hours: ";
	cin>> hours;
	cout<<"Enter the days that the firm has: ";
	cin>> days;
	cout<<"Enter the number of all workers: ";
	cin>> noOfWorkers;
	result=projectTimeCalculation(hours,days,noOfWorkers);
	cout<< result;
}
string projectTimeCalculation(int hours,float days,int noOfWorkers)
{
	string a="YES! ";
	string b="Not enough time! ";
	float remaining_days= days-(((0.1)*days));
	int ans= remaining_days*noOfWorkers*10;
if(ans<hours)
{
	return b + to_string(hours-ans) + " hours needed";
}
if(ans>hours)
{
	return a + to_string(ans-hours) + " Left";
}
return "";

}

