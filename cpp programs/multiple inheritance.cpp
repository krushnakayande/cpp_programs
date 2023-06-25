#include<iostream>
using namespace std;

class baseA
{
public :
    int num1,sum;

    void get_num()
    {
       cout<<"enter the value for num1 :"<<endl;
        cin>>num1;
    }
};
class baseB //public baseA
{
public:
    int num2;

    void get_num2()
    {
      cout<<"enter the value for num2: "<<endl;
    cin>>num2;
    }

};

class deriveC : public baseA,public baseB
{
    public:

    void sum1()
    {

        sum=num1+num2;

        cout<<"sum = "<<sum<<endl;
    }
};

int main()
{
    deriveC c;

    c.get_num();
    c.get_num2();
    c.sum1();
    return 0;
}
