#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
ifstream fin("Newfile.txt",ios::in); //File to be read from
ofstream fout("Secondfile.txt",ios::out | ios::app); //File to be appended to
string s;
if(!fin)
{
cout<<"File doesnt exist \n";
exit(0);
}
while(getline(fin,s)) //Reads a line from file pointed by fin into s
fout<<s; //Write's the string into file pointed by fout
}
