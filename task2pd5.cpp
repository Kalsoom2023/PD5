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

