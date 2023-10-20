#include<iostream>
using namespace std;
void reverse(string value);
main(){
	string tOrf;
	cout<<"Enter 'true' or 'false': ";
	cin>>tOrf;
	reverse(tOrf);
}
void reverse(string value)
{	if(value=="true"){
	cout<<"false";
}
	if(value=="false"){
	cout<<"true";
}
}