#include<iostream>
using namespace std;
void tpChecker(int people, int tp);
main(){
	int people;
	cout<<"Number of people in the household: ";
	cin>>people;
	int tp;
	cout<<"Number of rolls of TP: ";
	cin>>tp;
	tpChecker(people, tp);
}
void tpChecker(int people, int tp)
{	int left;
	left=people*57;
	int days;
	days=tp*500/left;
	if(days<14){
	cout<<"Your TP will only last "<<days<<" days, buy more!";}
	if(days>=14){
	cout<<"Your TP will last "<<days<<" days, no need to panic!";
}
}