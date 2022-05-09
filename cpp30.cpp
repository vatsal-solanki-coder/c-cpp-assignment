#include<iostream>
using namespace std;
class simpleInterest
{
    float answer;
    public:
            simpleInterest(float principal,int year,int rate)
            {
                answer = principal*year*rate;
                cout<<"\nInterest="<<answer;
            }
            simpleInterest(int principal,int year,float rate=2.5)
            {
                answer = principal*year*rate;
                cout<<"\nInterest="<<answer;
            }
};
int main()
{
    simpleInterest obj(100,5,0.9);
    simpleInterest obj2(100,6,2.5);
    return 0;
}