/*wap to add two complex number using friend operator overloading*/
#include<iostream>
using namespace std;
class complex{
    int a,b;
public:
    complex(){};
    complex(int i,int j){
        a=i;
        b=j;
    }
    friend complex operator +(complex ,complex );
    void show (){
        cout<<"the sum is:"<<a<<"+ i"<<b;
    }
};
complex operator +(complex c1,complex c2){
    complex temp;
    temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;
    return(temp);
}
int main(){
    int p,q,r,s;
    cout<<"Enter real part:";
    cin>>p;
    cout<<"Enter imaginary part:";
    cin>>q;
    cout<<"Enter real part:";
    cin>>r;
    cout<<"Enter imaginary part:";
    cin>>s;
    complex a(p,q), b(r,s);
    complex c;
    c=a+b;
    c.show();
}
