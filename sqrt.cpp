#include<iostream>
#include<cmath>
using namespace std;
class number
{
    double num;
public:
    void getnum()
    {
        cout<<"Enter number: ";
        cin>>num;
    }
    double mysqrt()
    {
        if(num<0)
            throw num;
        else
            return (sqrt(num));
    }
};
int main()
{
    number n1;
    double result;
    n1.getnum();
    try
    {
        result=n1.mysqrt(); 
        cout<<"\n Square root is: "<<result<<endl;
    }
    catch(double)
    {
        cout<<"\n Square root of negative number not possible!"<<endl;
    }
    system("PAUSE");
}
