/*
ASSIGNMENT 2 PROGRAMMING TECHNIQUE (SET 1)

TEAM MEMBERS:
YASMIN BATRISYIA BINTI ZAHIRUDDIN (A23CS0201)
NURUL ASYIKIN BINTI KHAIRUL ANUAR (A23CS0162)
NAJMA SHAKIRAH BINTI SHAHRULZAMAN (A23CS0140)
*/

#include <iostream> 
using namespace std;

void displayAccountInfo(string, int, double);
void deposit(double&, double);
void withdraw(double&, double);

int main()
{
    string acc_holder = "User 1";
    int acc_num = 1013202341;
    double acc_balance = 200;
    char trans;

    do 
    {
        cout << "<<<<< My Accounts Overview >>>>>" << endl;
        displayAccountInfo(acc_holder, acc_num, acc_balance);
        cout << endl;

        cout << "<<<<< Deposit Transaction >>>>>" << endl;
        deposit(acc_balance, 500);
        cout << endl;

        cout << "<<<<< Withdrawal Transaction >>>>>" << endl;
        withdraw(acc_balance, 200);
        cout << endl;

        cout << "<<<<< My Accounts Overview >>>>>" << endl;
        displayAccountInfo(acc_holder, acc_num, acc_balance);
        cout << endl;

        cout << "Do you want to perform another transaction? (Y/N) :";
        cin >> trans;
        cout << endl;
    } while ( (trans != 'N' ||trans != 'n') && (trans == 'Y' || trans == 'y') ); 

    system("pause");
    return 0;
}

void displayAccountInfo(string accountName, int accountNum, double balance)
{
    cout << "Account Holder Name: " << accountName << endl;
    cout << "Account Number: " << accountNum << endl;
    cout << "Balance: RM " << balance << endl;
}

void deposit(double& balance, double deposit)
{
    cout << "Deposit of RM " << deposit << " successful." << endl;
    balance = balance + deposit;
}

void withdraw(double& balance, double withdrawal)
{
    if (withdrawal <= balance) 
    {
        cout << "Withdrawal of RM " << withdrawal << " successful." << endl;
        balance = balance - withdrawal;
    }
    else 
    {
        cout << "Insufficient funds for withdrawal" << endl;
    }
}