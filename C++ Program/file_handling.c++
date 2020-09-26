#include <iostream>
#include <fstream> //this has 3 classes -->  fstreambase, ifstream , ofstream
using namespace std;
int main()
{
    string st1 = "pranjal gupta";
    string st2;
    //opening file and writing it
    // ofstream out("sample.txt");
    // out<<st1;

    //opening file and reading it
    ifstream in("sample.txt");
   // getline(in,st2);  //1st line ka pura data copy ho jayega isse.
   // in >> st2;  //from this we get only one word.
   // cout<<st2<<endl;
   while(in.eof()==0)  //this read all lines in that file 
   {
       getline(in,st2);
       cout<<st2<<endl;
   }
        return 0;
}