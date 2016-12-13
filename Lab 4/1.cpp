/*wap to add two complex numbers. Input complex numbers from two different classes and add them to display output using friend function.*/
#include<iostream>
using namespace std;
class complex2;
class complex1{
    int real,imag;
public:
    void input(){
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter imaginary part:";
        cin>>imag;
    }
    friend void add(complex1,complex2);
};
class complex2{
    int rl,im;
public:
    void input(){
        cout<<"Enter real part:";
        cin>>rl;
        cout<<"Enter imaginary part:";
        cin>>im;
    }
    friend void add(complex1,complex2);
};
void add (complex1 c1,complex2 c2){
    int real,imag;
    real=c1.real+c2.rl;
    imag=c1.imag+c2.im;
    cout<<"The sum of complex number is:"<<real<<"+"<<imag<<"i"<<endl;

}
int main(){
    complex1 c1;
    c1.input();
    complex2 c2;
    c2.input();
    add(c1,c2);
    return 0;
}
