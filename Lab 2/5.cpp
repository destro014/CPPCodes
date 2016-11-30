//program to input student details like name, roll no, faculty, semester and display the records by using function.
#include<iostream>
using namespace std;
int display(char [],int,char [],int);
int main(){
    char name[30],faculty[10];
    int roll,sem;
    cout<<"Enter the following details of the students."<<endl;
    cout<<"Enter the name of the student:";
    cin>>name;
    cout<<"\nRoll No.:";
    cin>>roll;
    cout<<"\nFaculty:";
    cin>>faculty;
    cout<<"\nSemester:";
    cin>>sem;
    display(name,roll,faculty,sem);
    return 0;
}
int display(char name[],int roll ,char faculty[] ,int sem){
    cout<<"The details of the student are:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Roll No.:"<<roll<<endl;
    cout<<"Faculty:"<<faculty<<endl;
    cout<<"Semester:"<<sem<<endl;
    return 0;
}
