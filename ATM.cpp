#include <iostream>
using namespace std;

void showMenu(); // function to show ATM menu

int main()
{
    int option;
    double balance = 500; //initial value
    
    
    do                                             // using do-while to continue showing the ATM menu
    {
        showMenu();
        cout << "select an option: " << endl;
        cin >> option;
        system("cls");                             // to clear the screen after inserting the desired choice
        switch (option)                            // using switch statement to check the choice
        {
        case 1: cout << "your current balance is: " << balance << endl; break;
        case 2: cout << "enter the deposite amount: " << endl;
            int depositeAmount;
            cin >> depositeAmount;
            balance += depositeAmount;
            cout << "your current balance now Is: " << balance << endl;
            break;
        case 3: cout << "enter the withdraw amount: " << endl;
            int withdrawAmount;
            cin >> withdrawAmount;
            balance -= withdrawAmount;
            cout << "your current balance now Is: " << balance << endl;
            break;
        }
    } while (option < 4);                            // exit the program

    system("pause>0");
}
// function definition   


void showMenu() {
    cout << "*********MENU*********" << endl;
    cout << "1. Check Balance: " << endl;
    cout << "2. Deposite: " << endl;
    cout << "3. Withdraw: " << endl;
    cout << "Press any other key to Exit: " << endl;
    cout << "***********************" << endl;
    
}                                                           