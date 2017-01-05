/*wap to decrease the count value of a class using operator overloading*/
#include<iostream>
using namespace std;
class counter{
    int count;
public:
    counter (int a){
        count=a;
    }
    void operator--(){
        count--;
    }
    void show(){
        cout<<"the count value is :"<<count;
    }
};
int main(){
 counter p(10);
 --p;
 p.show();
}
