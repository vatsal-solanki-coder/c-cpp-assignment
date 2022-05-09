#include<iostream>
using namespace std;
class lectureInformation
{
    int numberOfLectures[10];
    int choice,i=0;
    char nameOfLecture[200][10],nameOfTeacher[200][10],nameOfCourse[200][10];
    public:
    void inputData()
    {
        while(choice!=0)
        {
            fflush(stdin);
            cout<<"\nEnter name of lecture::";
            gets(nameOfLecture[i]);
            cout<<"\nEnter name of teacher::";
            gets(nameOfTeacher[i]);
            cout<<"\nEnter name of course::";
            gets(nameOfCourse[i]);
            fflush(stdin);
            cout<<"\nEnter number of lecture::";
            cin>>numberOfLectures[i];
            cout<<"\nDo you want to continue? 0 for no & 1 for yes::";
            cin>>choice;
            if(choice==1)
            {
                i++;
            }
        }
    }
    void displayData()
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"\nLecture information "<<j+1;
            cout<<"\nNOL::"<<nameOfLecture[j];
            cout<<"\nNOT::"<<nameOfTeacher[j];
            cout<<"\nNOC::"<<nameOfCourse[j];
            cout<<"\nNOLectures::"<<numberOfLectures[j];
        }
    }
};
int main()
{
    lectureInformation obj;
    obj.inputData();
    obj.displayData();
    return 0;
}