#include<iostream>
using namespace std;
class myClass
{
    float matrix1[2][3]={{1,2,3},{4,5,6}},matrix2[2][3]={{1,3,5},{2,4,6}},answer[2][3];
    public:
    void addition()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                answer[i][j] = matrix1[i][j]+matrix2[i][j];
            }
        }
    }
    void displayData()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<answer[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
};
int main()
{
    myClass obj;
    obj.addition();
    obj.displayData();
    return 0;
}