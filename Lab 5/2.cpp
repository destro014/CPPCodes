/*wap to calculate student result. Input result of 3 different subjects and draw the result for overall percentage
pass mark : 35
percentage :50<3rd division,65<2nd division, 80<1st division, >80 distinction  */
#include<iostream>
using namespace std;
class result{
    int a,b,c;
    float per;
public:
    void input(){
        cout<<"Enter number on first subject:";
        cin>>a;
        cout<<"Enter number on second subject:";
        cin>>b;
        cout<<"Enter number on third subject:";
        cin>>c;
    }
    void check (){
         if (a<35 || b<35 || c<35){
        cout<<"\n\n\t\t  Sorry you FAILED!"<<endl<<"\t\tBetter luck next time"<<endl;
        }
        else{
            per=((a+b+c)/3);
            if (per <50){
                cout<<"\n\n\t\tCongratulation! you have passed in Second Division"<<endl;
            }
            else if (per <65){
                cout<<"\n\n\t\tCongratulation! you have passed in Second Division."<<endl;
            }
            else if (per <80){
                cout<<"\n\n\t\tCongratulation! you have passed in First Division."<<endl;
            }
            else if (per>=80){
                cout<<"\n\n\t\tCongratulation! you have passed in Distinction."<<endl;
            }
        }
    }
};
int main(){
    cout<<"\t\t\t\t\tFull marks:100"<<endl;
    result r;
    r.input();
    r.check();
    return 0;

}
