#include<bits/stdc++.h>
using namespace std;

void game(string name, int balance)
{
    int amount;
    int number;
    char choice;
    int dice = rand()%10 + 1;
    do
    {
        cout <<name <<", Your current balance is: $" <<balance <<endl <<endl;
        do
        {
            cout <<"Enter amount to bet: $";
            cin >>amount;
            if(amount > balance)
                cout <<"INSUFFICIENCE BALANCE! " <<"\n\nPLEASE RE-ENTER AMOUNT: " <<endl;
        }while(amount > balance);

        do 
        {
            cout <<"Choose any number between(1-10): ";
            cin >>number;
            if(number > 10 || number < 1)
                cout <<"INCORRECT NUMBER CHOOSEN! "<<"\nPLEASE CHOOSE NUMBER BETWEEN(1-10): " <<endl;
        }while(number < 1 && number > 10);

        if(number == dice)
        {
            cout <<"\n\n";
            cout <<"YAY, YOU WON THE GAME!" <<endl;
            cout <<"YOU WON: $" <<amount*10 <<endl;
            balance = balance + amount*10;
        }
        else
        {
            cout <<"\n\n";
            cout <<"OOPS, BETTER LUCK NEXT TIME!" <<endl;
            cout <<"YOU LOST: $" <<amount <<endl;
            balance = balance - amount;
        }
        cout <<"THE NUMBER WAS: " <<dice <<endl;
        cout <<"\n\n";
        cout <<name <<", your current balance was: $" <<balance <<endl;
        cout <<"\n\n";

        if(balance == 0)
        {
            cout <<"YOU HAVE NO MONEY TO PLAY!" <<endl;
            break;
        }
            
        cout <<"HEY " <<name <<", DO YOU WANT TO PLAY AGIAN(y/n)? ";
        cin >>choice;
        }while(choice == 'y');
        cout <<"\n\n";
        cout <<"Thanks for playing the game, your remaining balance is: $" <<balance <<endl;
        cout <<"\n\n";
}

void rules()
{
    cout <<"\t\t\t\t\t\t------------------------------------RULES-------------------------------------" <<endl;
    cout <<"\t\t\t\t\t\t1.) CHOOSE ANY NUMBER BETWEEN 1-10." <<endl;
    cout <<"\t\t\t\t\t\t2.) IF YOU CHOOSE RIGHT NUMBER, YOU WILL GET 10 TIMES OF MONEY YOU BET." <<endl;
    cout <<"\t\t\t\t\t\t3.) IF YOU CHOOSE WRONG NUMBER, YOUR MONEY WILL BE DEDUCTED FROM YOUR BALANCE." <<endl <<endl;
    cout <<"\t\t\t\t\t\t********************************************************************************" <<endl<<endl;
}
void intro()
{
	cout <<"\t\t\t\t\t\t\t------------WELCOME TO CASINO WORLD-------------" <<endl;
	cout <<"\t\t\t\t\t\t\tMADE BY: Tushar Lalawat" <<endl <<endl;
    cout <<"\t\t\t\t\t\t\t************************************************" <<endl<<endl;
}

int main()
{
    string name;
    int balance;
    char choice;
    intro();
    do
    {
        cout <<"Do you want to play game (y/n): ";
        cin >>choice;
        if(choice != 'y')
        {
            cout <<"You should try thie, it's fun!" <<endl;
            cout <<"\n\n";
        }
    }while(choice != 'y');


    cout <<"Enter your name: ";
    cin >>name;
    cout <<"Enter starting amount to play game: $";
    cin >>balance;
    cout <<"Here are the rules for the game: " <<endl;
    rules();
    game(name, balance);

    return 0;
}