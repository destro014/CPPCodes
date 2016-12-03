/*wap to add two complex number using passing objects as an arguments and diplay the sum*/
#include<iostream>
using namespace std;
class complex{
private:
    int real,imag;
public:
    void details(){
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter imaginary part:";
        cin>>imag;
    }
    void sum(complex c1,complex c2){
        real=c1.real+c2.real;
        imag=c2.imag+c2.imag;
    }
    void display(){
        cout<<"The sum is: "<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main(){
    complex a,b,c;
    a.details();
    b.details();
    c.sum(a,b);
    c.display();
}
