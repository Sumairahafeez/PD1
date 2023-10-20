#include<iostream>
using namespace std;
void longestTime(int h, int m);
main(){
	int hours;
	cout<<"Enter the number of hours: ";
	cin>>hours;
	int mins;
	cout<<"Enter the number of minutes: ";
	cin>>mins;
	int conv;
	conv=hours*60;
	longestTime(conv, mins);
}
void longestTime(int h, int m)
{
	if(h>m){int conv;
	conv=h/60;
	cout<<conv;
}
	if(m>h){
	cout<<m;
}



}