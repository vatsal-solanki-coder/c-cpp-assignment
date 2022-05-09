#include<iostream>
#include<string>
using namespace std;
class myClass
{
    string myStringOne="vatsal",myStringTwo="Solanki";
    public:
    void operator +()
    {
        cout<<"\nFull Name::"<<myStringOne+myStringTwo;
    }
};
int main()
{
    myClass obj;
    obj.operator+();
    return 0;
}