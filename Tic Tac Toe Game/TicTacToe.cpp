#include<iostream>
#include<stdlib.h>
using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

void board();
int checkwin();

int main(){
    int player=1,i,choice;
    char mark;
    do {
            board();
            player = (player%2)?1:2;
            cout << "\t\t\t\t   Player " << player << ", enter a number:  ";
            cin >> choice;
            mark = (player == 1)?'X':'0';
            if (choice == 1 && square[1] == '1')
                square[1] = mark;
            else if (choice == 2 && square[2] == '2')
                square[2] = mark;
            else if (choice == 3 && square[3] == '3')
                square[3] = mark;
            else if (choice == 4 && square[4] == '4')
                square[4] = mark;
            else if (choice == 5 && square[5] == '5')
                square[5] = mark;
            else if (choice == 6 && square[6] == '6')
                square[6] = mark;
            else if (choice == 7 && square[7] == '7')
                square[7] = mark;
            else if (choice == 8 && square[8] == '8')
                square[8] = mark;
            else if (choice == 9 && square[9] == '9')
                square[9] = mark;
            else{
                cout<<"\t\t\t\t\t   Invalid move \n";
                player--;
              system("pause");
            }
            i=checkwin();
            player++;
            }while(i==-1);
            board();
	if(i==1){
		cout<<"\t\t\t\t\t   ==>\aPlayer "<<--player<<" win \n";
		system("pause");
	}
	else{
		cout<<"\t\t\t\t\t   ==>\aGame draw";
        system("pause");
	}
	return 0;
}
void board(){
    system("cls");
    cout<<"\t\t\t\t****************************************"<<endl;
    cout<<"\t\t\t####*****             Tic Tac Toe Game         *****####"<<endl;
    cout<<"\t\t\t\t****************************************"<<endl<<endl;
    cout<<"\n\t\t\t\t   Player 1==> X - O <==Player 2"<<endl<<endl;
    cout <<"\t\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "\t\t\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "\t\t\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t\t\t     |     |     " << endl;
	cout << "\t\t\t\t\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "\t\t\t\t\t     |     |     " << endl << endl;

}

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}

