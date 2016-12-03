/* wap to create a class for book details(name, publication, price, writer). input details for the book and display the records*/
#include<iostream>
using namespace std;
class book{
private:
    char name[30],pub[20],writer[30];
    int price;
public:
    void input(){
        cout<<"Enter book details:"<<endl;
        cout<<"Name:";
        cin>>name;
        cout<<"Publication:";
        cin>>pub;
        cout<<"Writer:";
        cin>>writer;
        cout<<"Price: NRs. ";
        cin>>price;
    }
    void display(){
        cout<<endl<<endl<<endl<<"The book details are:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Publication: "<<pub<<endl;
        cout<<"Writer: "<<writer<<endl;
        cout<<"Price: NRs. "<<price<<endl;
    }
};
int main(){
    book about;
    about.input();
    about.display();
}
