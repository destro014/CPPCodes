#include<iostream>
#define pi 3.14
using namespace std;
int area(int, int);
int area(int);
float area(float, float);
int main(){
    int l,b,r;
    float br,h;
    cout<<"Enter the length and breadth of rectangle:";
    cin>>l>>b;
    cout<<"Area of rectangle is:"<<area(l,b)<<endl;
    cout<<"Enter the radius of circle:";
    cin>>r;
    cout<<"Area of circle is:"<<area(r)<<endl;
    cout<<"Enter the base and height of triangle:";
    cin>>br>>h;
    cout<<"Area of triangle is:"<<area(br,h)<<endl;
}
int area(int l, int b ){
    return (l*b);
}
int area(int r){
    return (pi*r*r);
}
float area (float br, float h){
    return ((br*h)/2);
}
