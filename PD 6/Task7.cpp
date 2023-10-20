#include<iostream>
using namespace std;
string checkStudentStatus(int examHour,int examMinute, int studentHour, int studentMinute);

main(){
    int exhr,exmn,sthr,stmn;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>exhr;
     exhr = exhr*60;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>exmn;
    cout<<"Enter Student hour of arrival: ";
    cin>>sthr;
    sthr = sthr * 60;
    cout<<"Enter Student minutes of arrival: ";
    cin>>stmn;
    cout<<checkStudentStatus(exhr,exmn,sthr,stmn);
    
}
string checkStudentStatus(int examHour,int examMinute, int studentHour, int studentMinute)
{   int hour,min;

    int stmn = studentHour + studentMinute;
    int exmn = examHour + examMinute;
    min = exmn-stmn;
     string result;
    if(min>=0 && min<=30){
        return  "On time";
    }
    if(min<0){
        
        if(min<=-60){
        int hours = min / 60;
        int rem = hours *60;
        rem = min - rem;
        return "Late\n"+to_string(-1*hours)+":"+to_string(-1*rem)+" hours after the start";
    }
        if(min>=-60){
            return "Late\n"+to_string(-1*min)+" minutes after the start";
        }}
        
    if(min>0 && min>30){
        
        if(min>=60){
        int hours = min / 60;
        int rem = hours *60;
        rem = min - rem;
        return "Early\n"+ to_string(hours)+":"+to_string(rem)+" hours before the start";
    }
        if(min<=60){
            return "Early\n" + to_string(min)+" minutes before the start";
        }
        
    }
    
}
    