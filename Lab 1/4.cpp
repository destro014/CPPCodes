/*program to calculate interest of given principle amount*/
#include<iostream>
using namespace std;
int main(){
    int p,r,t,i;
    cout<<"Enter the principal:";
    cin>> p;
    cout<<"\nEnter the time in years:";
    cin>>t;
    cout<<"\nEnter the rate:";
    cin>>r;
    i=p*t*t/100;
    cout<<"The interest of "<<p<<" in "<<t<<" years at the rate of "<<r<<" is:"<<i<<endl;
    return 0;
}
