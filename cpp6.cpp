#include<iostream>
using namespace std;
class bankAccount
{
    char name[200];
    int accountNumber;
    char accountType[200];
    float accountBalance;
    public:
    void getAccountInformation()
    {
        fflush(stdin);
        cout<<"\nEnter name::";
        gets(name);
        fflush(stdin);
        cout<<"\nEnter account number::";
        cin>>accountNumber;
        fflush(stdin);
        cout<<"\nEnter account type::";
        gets(accountType);
        fflush(stdin);
        cout<<"\nEnter balance::";
        cin>>accountBalance;
    }
    void functions()
    {
        int choice;
        float withdrwawAmount;
        while(choice!=0)
        {
            int selection;
            cout<<"\nEnter,\n1 for assign value.\n2 for deposite amount.\n3 for withdraw amount.\n4 for name and balance.\n";
            cin>>selection;
            switch(selection)
            {
                case 1:
                        cout<<"\nEnter amount::";
                        cin>>accountBalance;
                        break;
                case 2:
                        cout<<"\nEnter amount::";
                        cin>>accountBalance;
                        break;
                case 3:
                        cout<<"\nEnter amount::";
                        cin>>withdrwawAmount;
                        accountBalance=accountBalance-withdrwawAmount;
                        break;
                case 4:
                        cout<<"\n"<<name<<"\t"<<accountBalance;
                        break;
                default:
                        cout<<"\nInvalid input.";
                        break;

            }
            cout<<"\nDo you want to continue?1 for yes & 0 for no::";
            cin>>choice;
        }
    }
};
int main()
{
    bankAccount obj;
    obj.getAccountInformation();
    obj.functions();
    return 0;
}