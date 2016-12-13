/*wap to calculate interest of given amount using concept of class*/
#include<iostream>
using namespace std;
class interest{
    int i,p,r,t;
public:
    void input(){
        cout<<"Enter the principle amount:";
        cin>>p;
        cout<<"Enter the rate in percentage:";
        cin>>r;
        cout<<"Enter the time in year:";
        cin>>t;
    }
    void calculate(){
        i=(p*t*r)/100;
        cout<<"The interest is:"<<i<<endl;
    }
};
int main(){
    interest a;
    a.input();
    a.calculate();
    return 0;
}
