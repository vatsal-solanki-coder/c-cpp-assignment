#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () 
{
  ofstream MyWriteFile("myFourthFile.txt");
  MyWriteFile << "hello vatsal anil solanki.";
  MyWriteFile.close();
  string myText;
  ifstream MyReadFile("myFourthFile.txt");
  while(getline(MyReadFile,myText)) 
  {
    cout << myText;
  }
  // Close the file
  MyReadFile.close();
  return 0;
}