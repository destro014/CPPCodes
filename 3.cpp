//program to check if the given number is perfect square or not
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a;
    double b;
    cout<<"Enter any number:";
    cin>>a;
    b=sqrt((double)a);
    if(a==(b*b)){
        cout<<"The number is perfect square root."<<endl;
    }
    else{
    cout<<"The number is not a perfect square root."<<endl;
    }
    cout<<"The square root is:"<<b<<endl;
    return 0;
}
