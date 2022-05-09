#include<iostream>
using namespace std;
float areaOfCircle(float radius)
{
    return (3.14*radius*radius);
}
float areaOfRectangle(float height,float width)
{
    return (height*width);
}
float areaOfTriangle(float height,float base)
{
    return (height*base)/2;
}
int main()
{
    float radius,height,width,base,ans1,ans2,ans3;
    cout<<"\nEnter radius::";
    cin>>radius;
    ans1=areaOfCircle(radius);
    cout<<"\nArea of circle="<<ans1;
    cout<<"\nEnter height ans width::";
    cin>>height>>width;
    ans2=areaOfRectangle(height,width);
    cout<<"\nArea of rectangle="<<ans2;
    cout<<"\nEnter height and base::";
    cin>>height>>base;
    ans3=areaOfTriangle(height,base);
    cout<<"\nArea of triangle="<<ans3;
    return 0;
}