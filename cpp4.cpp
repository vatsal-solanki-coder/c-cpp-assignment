#include<iostream>
using namespace std;
class Matrix
{
    int matrix[2][3] = {{1,2,5},{1,2,3}};
    public:
    void display()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<matrix[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
};
int main()
{
    Matrix obj;
    obj.display();
    return 0;
}