
#include<iostream>
using namespace std;

class Bank
{
public:

    static int account;

    int diposit,withdr,checkbal,balance;



    static void create_account()
    {
        char name,mob,add;

        cout<<"Enter the Account no."<<endl;
        cin>>account;

        cout<<"Enter Your name : "<<endl;
        cin>>name;

        cout<<"Enter Your Mobile Number :"<<endl;
        cin>>mob;

        cout<<"Enter Your Address :"<<endl;
        cin>>add;

    }
    void deposite()
    {
        cout<<"how much you want to deposite"<<endl;
        cin>>diposit;
    }
    void withdrawal()
    {
        cout<<"enter your amount you want to withdraw"<<endl;
        cin>>withdr;
    }
    void checkbalance()
    {
        cout<<"Your Current balance is :"<<endl;
        cin>>checkbal;
    }

};
int Bank :: account;

int main()
{
    Bank b;

    int a;
    cout<<"WEL COME TO THE HDFC BANK"<<endl;

    /*cout<<"Select your choice :"<<endl;
    cout<<"1. You want create you accout"<<endl;
    cout<<"2. You want deposite from accout"<<endl;
    cout<<"3. You want withdrawal accout"<<endl;
    cout<<"4. You want checkbalace accout"<<endl;
    //cout<<"5. You want create you accout"<<endl;*/

    cout<<"1. Create Account"<<endl;
    cout<<"2. Enter your Account"<<endl;

    cin>>a;

   /* switch(a)
    {
    case 1:
        Bank::ac_create();
    break;

    case 2:
        b.deposite();
    break;

    case 3:
        b.withdrawal();
    break;

    case 4:
        b.checkbalance();
    break;
    }*/

    switch(a)
    {
    case 1:
        b.create_account();
        break;
    //case 2:
     //   b.enter_in_account();
     //   break;
    default:
        cout<<"Given input is invalid"<<endl;
    }
    return 0;
}
