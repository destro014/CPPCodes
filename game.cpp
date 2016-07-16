#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int i,x,a;
    int choice;
    a=rand()%100;
    cout <<"\t\t\t   LET'S PLAY A GAME"<<endl;
    cout <<"\t\tCan you guess a number I am thinking of ??"<<endl;
    A:cout<<"\n\n\t\t     Enter a number I am thinking of"<<endl;
    for (i=0;i<5000;i++)
    {
        cout<<"\t\t\t\t   ";
        cin>>x;
        if (x==a)
        {
            cout<<"\t\t\t\t  Hurray !!!"<<endl;
            cout <<"\t\t\t  Your guess is right"<<endl;
            break;
        }
        else if(x>a)
        {
            cout<<"\n\t\t      The entered number is greater"<<endl;
        }
        else
        {
            cout<<"\n\t\t       The entered number is small"<<endl;
        }

    }
   cout<<"\n\n\n\t\t\t Do you want to play again? "<<endl;
   cout<<"\t\t\t        1 for yes "<<endl;
   cout<<"\t\t\t        2 for no "<<endl;
   cout<<"\t\t\t\t   ";
   cin>>choice;
   switch (choice)
   {
    case 2:
        cout<<"\t\t\t Thanks For playing."<<endl;
        break;
    case 1:
        goto A;
        break;
    default:
        cout<<"\t\t\tError 404: Nothing found!!!"<<endl;
   }
    getch();
    return 0;
}
