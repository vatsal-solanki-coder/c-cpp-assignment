#include<iostream>
using namespace std;
inline float cube(float x)
{
    return x*x*x;
}
inline float multiplication(float x,float y)
{
    return x*y;    
}
int main()
{
    float x,y,z;
    cout<<"\nEnter value of x::";
    cin>>x;
    cout<<"\ncube of "<<x<<" is "<<cube(x);
    cout<<"\nEnter value of y and z::";
    cin>>y>>z;
    cout<<"\nmultiplication of "<<y<<" and "<<z<<" is "<<multiplication(y,z);
    return 0;
}