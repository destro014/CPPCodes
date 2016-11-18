//program to find leap years between 1900 to 2000
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"The leap years between 1900 and 2000 are:"<<endl;
    for(year=1900;year<=2000;year++){
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                cout << year << ",";
            }
            else
                cout<<"";
        }
        else
            cout << year <<",";
    }
    else
        cout<<"";
    }
    return 0;
}
