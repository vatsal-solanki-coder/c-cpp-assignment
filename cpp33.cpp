#include<iostream>
using namespace std;
void calculation(int x,int y)
{
    cout<<"\nAnswer="<<x+y;
}
void calculation(float x,float y)
{
    cout<<"\nAnswer="<<x-y;
}
void calculationTwo(int x,int y)
{
    cout<<"\nAnswer="<<x*y;
}
void calculationTwo(float x,float y)
{
    cout<<"\nAnswer="<<x/y;
}
int main()
{
    calculation(12,12);
    calculation(12.21f,12.23f);
    calculationTwo(20,30);
    calculationTwo(12.345f,0.123f);
    return 0;
}