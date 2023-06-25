#include<iostream>
using namespace std;

class Addition
{
    int a;
public:
    Addition(int a)
    {
        this->a = a;
    }

    Addition operator+(Addition &add1)
    {
        Addition result;
        result.a = a + add1.a;

        return result;
    }

    display()
    {
        cout<<"value = "<<a<<endl;
    }
};

int main()
{
    Addition add(10);
    Addition add2(20);
    add.display();
    Addition add3 = add2+(add);
    add3.display();
}
