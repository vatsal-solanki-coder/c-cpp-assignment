#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class myclass
{
    public:
    void write()
    {
        ofstream write("myFifthFile.txt");
        write<<"hi there i am vatsal solanki. i am from india.";
        write.close();
    }
    void read()
    {
        string dataString;
        ifstream read("myFifthFile.txt");
        while(getline(read,dataString))
        {
            cout<<dataString;
        } 
        read.close();
    }
};
int main()
{
    myclass obj;
    obj.write();
    obj.read();
    return 0;
}