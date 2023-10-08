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
