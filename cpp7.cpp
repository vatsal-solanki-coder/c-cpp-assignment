#include<iostream>
using namespace std;
class bookShop
{
    int bookQuantity;
    float price;
    char authorName[200],bookTitle[200],bookPublisher[200],bookName[200];
    public:
    void inputBookInformation()
    {
        cout<<"\nEnter book name::";
        gets(bookName);
        cout<<"\nEnter name of author::";
        gets(authorName);
        cout<<"\nEnter title of book::";
        gets(bookTitle);
        cout<<"\nEnter book publisher::";
        gets(bookPublisher);
        cout<<"\nEnter book price::";
        cin>>price;
        cout<<"\nBook quantity::";
        cin>>bookQuantity;
    }
    void displayBookInformation()
    {
        cout<<"\n\t::Book Information::";
        cout<<"\nName::"<<bookName;
        cout<<"\nAuthor::"<<authorName;
        cout<<"\nTitle::"<<bookTitle;
        cout<<"\nPublisher::"<<bookPublisher;
        cout<<"\nPrice::"<<price;
        cout<<"\nQuantity::"<<bookQuantity;
    }
};
int main()
{
    bookShop obj;
    obj.inputBookInformation();
    obj.displayBookInformation();
    return 0;
}