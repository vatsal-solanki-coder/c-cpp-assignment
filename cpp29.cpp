#include<iostream>
using namespace std;
class addition
{
    public:
    addition()
    {
        float a,b;
        cout<<"\nEnter value of a::";
        cin>>a;
        cout<<"\nEnter value of b::";
        cin>>b;
        cout<<"\nAnswer "<<a+b;
    }
};
class subtraction
{
    public:
    subtraction()
    {
        float a,b;
        cout<<"\nEnter value of a::";
        cin>>a;
        cout<<"\nEnter value of b::";
        cin>>b;
        cout<<"\nAnswer "<<a-b;
    }
};
class multiplication
{
    public:
    multiplication()
    {
        float a,b;
        cout<<"\nEnter value of a::";
        cin>>a;
        cout<<"\nEnter value of b::";
        cin>>b;
        cout<<"\nAnswer "<<a*b;
    }
};
class division
{
    public:
    division()
    {
        float a,b;
        cout<<"\nEnter value of a::";
        cin>>a;
        cout<<"\nEnter value of b::";
        cin>>b;
        cout<<"\nAnswer "<<a/b;
    }
};
int main()
{
    addition obj;
    subtraction obj2;
    multiplication obj3;
    division obj4;
    return 0;
}