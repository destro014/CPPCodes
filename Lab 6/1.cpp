/*wap to add two complex number using operator overloading*/
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
void show(){
    cout<<a<<"+i"<<b;
}
complex operator +(complex c){
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return(temp);
}
};
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
    complex c1(p,q),c2(r,s),c3;
    cout<<"The 1st no. is:";
    c1.show();
    cout<<"\nThe 2nd no. is:";
    c2.show();
    c3=c1+c2;
    cout<<"\nSum is:";
    c3.show();
}
