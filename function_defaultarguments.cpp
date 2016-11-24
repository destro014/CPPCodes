#include<iostream>
using namespace std;
int area(int l, int b=0);
int main(){
    int l,b;
    cout<<"Enter the length and breadth of rectangle:";
    cin>>l>>b;
    cout<<"Area of rectangle is:"<<area(l,b)<<endl;
    cout<<"Enter the length of square:";
    cin>>l;
    cout<<"Area of square is:"<<area(l)<<endl;
}
int area(int l, int b){
    if (b==0){
        return (l*l);
    }
    else
        return (l*b);
}
