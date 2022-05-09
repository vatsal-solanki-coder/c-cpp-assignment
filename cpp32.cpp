#include<iostream>
using namespace std;
inline float multiplication(float a,float b)
{
    return (a*b);
}
inline float cube(float a)
{
    return (a*a*a);
}
int main()
{
    float a,b;
    cout<<"\nEnter value of a and b::";
    cin>>a>>b;
    cout<<"\na*b="<<multiplication(a,b);
    cout<<"\nEnter value of a::";
    cin>>a;
    cout<<"\na*a*a="<<cube(a);
    return 0;
}