#include <iostream>
using namespace std;

class Bank
{
    int amount = 0;
    int balance;
    char ch;
    string c_acc_no = "1020201";
    string acc_no;

public:
    Bank(int balance = 0)
    {
        this->balance = balance;
    }

    void deposite()
    {
        cout << "Enter Account No: ";
        cin >> acc_no;
        if (acc_no == c_acc_no)
        {
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            balance = balance + amount;
            cout << "Amount has been deposited" << endl;
            cout<<"Current Balance = "<<balance<<endl;
            cout << "do you want to deposite the cash again, if Yes Press y, if Not Press n : " << endl;
            cin >> ch;
            if (ch == 'y')
            {
                deposite();
            }
        }
        else
        {
            cout<<"You have entered invalid account number, please enter valid account number"<<endl;
        }
    }

    void withdraw()
    {
        cout << "Enter Account No: ";
        cin >> acc_no;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;
        if (acc_no == c_acc_no)
        {
            if (amount > balance)
            {
                cout << "You cannot withdraw cash, because you have insufficient balance" << endl;
                cout<<"Current Balance = "<<balance<<endl;
            }
            else
            {
                balance = balance - amount;
                cout << "Amount has been withdraw" << endl;
                cout<<"Current Balance = "<<balance<<endl;
                cout << "do you want to withdraw the cash again, if Yes Press y, if Not Press n : " << endl;
                cin >> ch;
                if (ch == 'y')
                {
                    withdraw();
                }
            }
        }
        else
        {
            cout<<"You have entered invalid account number, please enter valid account number"<<endl;
        }
    }

    void check_balance()
    {
        cout << "Enter Account No: ";
        cin >> acc_no;
        if (acc_no == c_acc_no)
        {
            cout << "Account No: " << acc_no << endl;
            cout << "Balance = " << balance << endl;
        }
        else
        {
            cout<<"You have entered invalid account number, please enter valid account number"<<endl;
        }
    }
};

int main()
{
    int choice;
    Bank b;
    int n;
    do
    {
        /* code */
        cout << "Enter your choice\n1.Deposite\n2.Withdraw\n3.Check Balance\n4.Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            b.deposite();
            break;
        }
        case 2:
        {
            b.withdraw();
            break;
        }
        case 3:
        {
            b.check_balance();
            break;
        }
        case 4:
        {
            return 0;
        }
        }
        cout << "Do you want to continue if yes press 0: " << endl;
        cin >> n;
    } while (n == 0);

    return 0;
}
