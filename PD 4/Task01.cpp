#include<iostream>
using namespace std;
void IsEqual(int x, int y);
main(){
	int n1,n2;
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;
	IsEqual(n1,n2);
}
void IsEqual(int x, int y)
{	if(x==y){
	cout<<"true";
}
	if(x!=y){
	cout<<"false";
}
}