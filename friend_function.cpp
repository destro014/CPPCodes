/*WAP to display larger number which has been inputted from two different classes using friend function.*/
#include<iostream>
using namespace std;
class second;
class first{
private:
    int a;
public:
    void enter(){
        cout<<"Enter any number:";
        cin>>a;
    }
    friend void larger(first, second);
};
class second{
private:
    int b;
public:
    void enter(){
        cout<<"Enter another number:";
        cin>>b;
       }
    friend void larger(first,second);

};
void larger(first c1,second c2){
    if (c1.a>c2.b){
        cout<<"Larger number is:"<<c1.a;
    }
    else
        cout<<"Larger is:"<<c2.b;
}
int main(){
    first c1;
    c1.enter();
    second c2;
    c2.enter();
    larger(c1,c2);
}
