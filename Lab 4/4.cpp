/*wap to exchange values of two classes using the concept of friend function*/
#include<iostream>
using namespace std;
class second;
class first{
    int a;
public:
    void input(){
        cout<<"Enter any number:";
        cin>>a;
    }
    void display(){
        cout<<"The given number, a:"<<a<<endl;
    }
    friend void swap(first, second);
};
class second{
    int b;
public:
    void input(){
        cout<<"Enter any number:";
        cin>>b;
    }
    void display(){
        cout<<"The given number, b:"<<b<<endl;
    }
    friend void swap(first,second);
};
void swap(first n1,second n2){
    int temp;
    temp=n1.a;
    n1.a=n2.b;
    n2.b=temp;
    cout<<"After swapping: a: "<<n1.a<<" and b: "<<n2.b<<endl;

}
int main(){
    first n1;
    n1.input();
    second n2;
    n2.input();
    n1.display();
    n2.display();
    swap(n1,n2);
    return 0;
}
