/*wap to display the count value of class. use multiple object to display value with the concept of static data*/
#include<iostream>
using namespace std;
class counter{
    static int count;
public:
    void getdata(){
        count++;
    }
    void display(){
        cout<<"Counter:"<<count<<endl;
    }
};
int counter::count;
int main(){
    counter c1,c2;
    c1.getdata();
    c1.display();
    c2.getdata();
    c2.display();
    return 0;
}
