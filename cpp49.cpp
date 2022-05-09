#include<iostream>
using namespace std;
template <class T>
class myclass
{
    private:
    T x,y,temp;
    public:
    T myfunction()
    {
        cout<<"\nenter two values::";
        cin>>x>>y;
        cout<<"\nbefore swapping x="<<x<<" and y="<<y;
        temp=x;
        x=y;
        y=temp;
        cout<<"\nafter swapping x="<<x<<" and y="<<y;
    }
};
int main()
{
    myclass<float> obj;
    obj.myfunction();
    return 0;
}