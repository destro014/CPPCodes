/*wap to set counter value from constructor and increment that counter to display incremented value */
#include<iostream>
using namespace std;
class counter{
    int count;
public:
    counter(int a){
        count=a;
    }
    int increment(){
        count++;
        return count;
    }
};
int main(){
    counter a(10);
    cout<<"The incremented value is:"<<a.increment();
}
