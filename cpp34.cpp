#include<iostream>
using namespace std;
class myclass
{
    private:
    int x=10,y=20;
    public:
    void operator +()
    {
        cout<<"\nx+y="<<x+y;
    }
};
int main()
{
    myclass obj;
    obj.operator+();
    return 0;
}