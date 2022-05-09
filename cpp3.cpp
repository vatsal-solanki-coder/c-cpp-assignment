#include<iostream>
using namespace std;
class calculator
{
    int numberOne,numberTwo,answer;
    public:
    void Addition()
    {
        cout<<"\nEnter number one::";
        cin>>numberOne;
        cout<<"\nEnter number two::";
        cin>>numberTwo;
        answer=numberOne+numberTwo;
        cout<<"\nAnswer is::"<<answer;
    }
    void Subtraction()
    {
        cout<<"\nEnter number one::";
        cin>>numberOne;
        cout<<"\nEnter number two::";
        cin>>numberTwo;
        answer=numberOne-numberTwo;
        cout<<"\nAnswer is::"<<answer;
    }
    void Multiplication()
    {
        cout<<"\nEnter number one::";
        cin>>numberOne;
        cout<<"\nEnter number two::";
        cin>>numberTwo;
        answer=numberOne*numberTwo;
        cout<<"\nAnswer is::"<<answer;
    }
    void Division()
    {
        cout<<"\nEnter number one::";
        cin>>numberOne;
        cout<<"\nEnter number two::";
        cin>>numberTwo;
        answer=numberOne/numberTwo;
        cout<<"\nAnswer is::"<<answer;
    }
};
int main()
{
    calculator obj;
    obj.Addition();
    obj.Subtraction();
    obj.Multiplication();
    obj.Division();
    return 0;
}
