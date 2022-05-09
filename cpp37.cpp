#include<iostream>
using namespace std;
class cricketer
{
    public:
    int totalRuns,averageRuns;
    float performance;
};
class batsman:cricketer
{
    public:
    void inputData()
    {
        cout<<"\nEnter total runs::";
        cin>>totalRuns;
        cout<<"\nEnter average runs::";
        cin>>averageRuns;
        cout<<"\nEnter performance::";
        cin>>performance;
    }
    void displayData()
    {
        cout<<"\nTotal Runs::"<<totalRuns;
        cout<<"\nAverage runs::"<<averageRuns;
        cout<<"\nPerformance::"<<performance;
    }
};
int main()
{
    batsman obj;
    obj.inputData();
    obj.displayData();
    return 0;
}