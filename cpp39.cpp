#include<iostream>
#include<string>
using namespace std;
class students
{
    public:
    int rollNumber;
};
class test:public students
{
    public:
    float marks[2];
};
class result:public test
{
    public:
    float percentage;
};
int main()
{
    result obj;
    cout<<"\nroll number::";
    cin>>obj.rollNumber;
    cout<<"\nmarks1 and marks2::";
    cin>>obj.marks[0]>>obj.marks[1];
    obj.percentage=(obj.marks[0]+obj.marks[1])/2;
    cout<<"\npercentage::"<<obj.percentage;
    return 0;
}