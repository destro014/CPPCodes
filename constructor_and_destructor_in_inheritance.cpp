#include<iostream>
using namespace std;
class base{
public:
    base(){
        cout<<"Inside constructor"<<endl;
    }
    ~base(){
        cout<<"Destructing base"<<endl;
    }
};
class derived:public base{
public:
    derived(){
        cout<<"Inside derived class"<<endl;
    }
    ~derived(){
        cout<<"destructing derived"<<endl;
    }
};
int main(){
    derived d;
}
