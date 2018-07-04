#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
ifstream fin("Newfile.txt",ios::in); //open file in Read mode only
string s;
int count=0;
if(!fin)
{
cout<<"Error file doesnt exist \n";
exit(0);
}

while(getline(fin,s)) //getline also reads whitespace up until \n is encountered
{
count++;
}
cout<<"No. of lines :"<<count<<endl;
}
