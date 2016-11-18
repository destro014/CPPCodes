//program to swap two integer number using function. Use pass by value and pass by address techniques.
#include<iostream>
int swap(int ,int );
int swap2(int &,int &);
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value for a and b;";
    cin >>a>>b;
    swap(a,b);
    swap2(a,b);
    return 0;
}
int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping a= "<<a<<" and b= "<<b<<endl;
    return 0;
}
int swap2(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping a= "<<a<<" and b = "<<b<<endl;
    return 0;
}
