#include <iostream>
using namespace std;
string calculateGrade(float average);
float calculateAverage(float,float,float,float,float);
main(){
    string name;
    float marksEng,marksMaths,marksChem,marksSSci,marksBio;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>marksEng;
    cout<<"Enter marks for Maths: ";
    cin>>marksMaths;
    cout<<"Enter marks for Chemistry: ";
    cin>>marksChem;
    cout<<"Enter marks for Social Science: ";
    cin>>marksSSci;
    cout<<"Enter marks for Biology: ";
    cin>>marksBio;
    cout<<"Student Name: "<<name<<endl;
    float avg=calculateAverage(marksEng,marksMaths,marksChem,marksSSci,marksBio);
    cout<<"Percentage: "<<avg<<"%"<<endl;
    
    cout<<"Grade: "<<calculateGrade(avg);
}
float calculateAverage(float marksEng,float marksMaths,float marksChem, float marksSSci, float marksBio)
{
    float total = marksEng + marksMaths + marksChem + marksBio +marksSSci;
    float average = (total/5);
    return average;
}
string calculateGrade(float average)
{   string grade;
    if(average>=90 && average<=100){
        grade = "A+";
    }
    if(average>=80 && average<90){
        grade = "A";
    }
    if(average>=70 && average<80){
        grade = "B+";
    }
    if(average>=60 && average<70){
        grade = "B";
    }
    if(average>=50 && average<60){
        grade = "C";
    }
    if(average>=40 && average<50){
        grade = "D";
    }
    if(average<40){
        grade = "F";
    }
    return grade;

}
