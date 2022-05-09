#include<iostream>
using namespace std;
class result
{
    int rollNumber[5];
    float sub1[5],sub2[5],sub3[5],total[5],percentage[5];
    public:
    void inputData()
    {
        for(int i=0;i<5;i++)
        {
            cout<<"\nEnter details of student "<<i+1;
            cout<<"\nEnter roll number::";
            cin>>rollNumber[i];
            cout<<"\nEnter marks of sub 1::";
            cin>>sub1[i];
            cout<<"\nEnter marks of sub 2::";
            cin>>sub2[i];
            cout<<"\nEnter marks of sub 3::";
            cin>>sub3[i];
            total[i]=sub1[i]+sub2[i]+sub3[i];
            percentage[i]=(total[i]/300)*100;
        }
    }
    void displayData()
    {
        for(int i=0;i<5;i++)
        {
            cout<<"\nPercentage of "<<i+1<<" is::"<<percentage[i];
        }
    }
};
int main()
{
    result obj;
    obj.inputData();
    obj.displayData();
    return 0;
}