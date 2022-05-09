#include<iostream>
#include<string>
using namespace std;
class person
{
    public:
    string name;
    int age;
};
class student:public person
{
    public:
    float percentage;
};
class teacher:public person
{
    public:
    float salary;
};
int main()
{
    student obj;
    teacher obj2;
    fflush(stdin);
    cout<<"\nEnter name of student::";
    cin>>obj.name;
    fflush(stdin);
    cout<<"\nEnter student age::";
    cin>>obj.age;
    cout<<"\nEnter student percentage::";
    cin>>obj.percentage;
    fflush(stdin);
    cout<<"\nEnter teacher name::";
    cin>>obj2.name;
    fflush(stdin);
    cout<<"\nEnter teacher age::";
    cin>>obj2.age;
    cout<<"\nEnter salary::";
    cin>>obj2.salary;
    fflush(stdin);
    cout<<"\n\t-->information of student<--";
    cout<<"\n"<<obj.name<<"\t"<<obj.age<<"\t"<<obj.percentage;
    cout<<"\n\t-->information of teacher <--";
    cout<<"\n"<<obj2.name<<"\t"<<obj2.age<<"\t"<<obj2.salary;
    return 0;
}