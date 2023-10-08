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


