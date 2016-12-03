/*wap to input complex number use passing object as an argument to display the inputted number from other object*/
#include<iostream>
using namespace std;
class complex{
private:
    int real,imag;
public:
    void input(){
        cout<<"Enter the real part:";
        cin>>real;
        cout<<"enter the imaginary part:";
        cin>>imag;
    }
    void display(complex b){
        real=b.real;
        imag=b.imag;
        cout<<"The complex number is: "<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main(){
    complex a,b;
    a.input();
    b.display(a);
    return 0;
}
