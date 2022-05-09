#include<iostream>
using namespace std;
class factorial
{
   int number,i,answer=1;
   public:
            void myfunction()
            {
                cout<<"\nEnter a number::";
                cin>>number;
                for(i=1;i<=number;i++)
                {
                    answer = answer*i;
                }
                cout<<"\nFactorial of "<<number<<" is::"<<answer;
            }
};
class fibonaci
{
    int terms,i,a=0,b=1,c;
    public:
            void myfunction()
            {
                cout<<"\nEnter terms::";
                cin>>terms;
                if(terms<=0)
                {
                    cout<<"\nPlease enter valid input.";
                }
                else if(terms==1)
                {
                    cout<<"\n0";
                }
                else if(terms==2)
                {
                    cout<<"\n1";
                }
                else
                {
                    for(i=2;i<terms;i++)
                    {
                        c=a+b;
                        a=b;
                        b=c;
                    }
                    cout<<"\n"<<c;
                }
            }
};
int main()
{
    factorial obj;
    fibonaci obj2;
    obj.myfunction();
    obj2.myfunction();
    return 0;
}