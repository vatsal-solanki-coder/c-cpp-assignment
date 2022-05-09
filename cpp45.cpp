#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ofstream myFile;
    myFile.open("myThirdFile.txt");
    myFile<<"hello vatsal solanki.";
    myFile.close();
    cout<<"\nfile has been created.";
    return 0;
}