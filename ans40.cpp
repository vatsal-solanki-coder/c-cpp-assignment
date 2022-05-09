#include<iostream>
#include<string>
using namespace std;
class customerInformation
{
    public:
    string customerName;
    int customerAccountNumber;
    string customerAccountType;
    float customerAccountBalance;
};
class savingAccount:public customerInformation
{
    float simpleInterest,interestPrincipal,interestRate,interestTime;
    float withdrawAmount;
    public:
    void inputData()
    {
        fflush(stdin);
        cout<<"\nEnter customer name::";
        cin>>customerName;
        fflush(stdin);
        cout<<"\nEnter customer account number::";
        cin>>customerAccountNumber;
        fflush(stdin);
        cout<<"\nEnter account balance::";
        cin>>customerAccountBalance;
    }
    void calculationOfSimpleInterest()
    {
        cout<<"\nEnter interest principal,interest rate & interest time::";
        cin>>interestPrincipal>>interestRate>>interestTime;
        simpleInterest = interestPrincipal*interestRate*interestTime;
        cout<<"\nSimple Interest = "<<simpleInterest;
    }
    void withDrawAmount()
    {
        cout<<"\nEnter amount that you want to withdraw::";
        cin>>withdrawAmount;
        cout<<"\nAmmount "<<withdrawAmount<<" withdrawed.";
        customerAccountBalance = customerAccountBalance-withdrawAmount; 
    }
    void displayData()
    {
        cout<<"\nCustomer name "<<customerName;
        cout<<"\nCustomer account number "<<customerAccountNumber;
        cout<<"\nCustomer account balance "<<customerAccountBalance;
    }
};
class currentAccount:public customerInformation
{
    float withdrawAmount;
    public:
    void inputData()
    {
        fflush(stdin);
        cout<<"\nEnter customer name::";
        cin>>customerName;
        fflush(stdin);
        cout<<"\nEnter customer account number::";
        cin>>customerAccountNumber;
        fflush(stdin);
        cout<<"\nEnter account balance::";
        cin>>customerAccountBalance;
    }
    void withdrawAmount()
    {
        cout<<"\nEnter amount::";
        cin>>withdrawAmount;
        cout<<"\nAmount "<<withdrawAmount<<" withdrawed.";
        customerAccountBalance=customerAccountBalance-withdrawAmount;
    }
    void displayData()
    {
        fflush(stdin);
        cout<<"\nname::"<<customerName;
        fflush(stdin);
        cout<<"\naccount number::"<<customerAccountNumber;
        fflush(stdin);
        cout<<"\naccount balance::"<<customerAccountBalance;
    }
};
class myclass1:public savingAccount
{
    
    void process()
    {
        
    }
};
class myclass2
{
    int c1,c2,c3,c4,c5;
};
int main()
{
    savingAccount obj;
    currentAccount obj2;

    return 0;
}