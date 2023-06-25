#include<iostream>
using namespace std;

class addition
{
public:

    void add(int x,int y)
    {
        int c;
        cout<<"the x value is :"<< x <<" the y value is : "<<y<<endl;
        c=x+y;
        cout<<"the addition is : "<<c<<endl;
    }

    void add(double x, double y)
    {
        double c;
        cout<<"the x value is :"<< x <<" the value of y is :"<<y <<endl;
        c=x+y;
        cout<<"the addition is : "<<c<<endl;
    }
};

int main()
{
    addition a;
    a.add(4,5);
    a.add(5.36,6.35);
    return 0;
}
