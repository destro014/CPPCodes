//program to declare integer array of size 10. Input 10 numbers and display them.
#include<iostream>
using namespace std;
int main(){
    int num[10],i;
    cout<<"Enter the 10 integer numbers:";
    for (i=0;i<10;i++){
        cin>>num[i];
    }
    cout<<"The entered numbers are:"<<endl;
    for (i=0;i<10;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}
