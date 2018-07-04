#include <iostream>
#include<fstream>
using namespace std;
int main()
{
const int SIZE = 100;
char stringObj[SIZE];
int i= 0;
fstream file("new.txt",ios::in);
int valueAt = 1;
int check = 0;
int count=0;
file.getline(stringObj,3000);
while(stringObj[i] !='\0')
{
switch(stringObj[i])
{
case 'A':
case 'a':
case 'E':
case 'e':
case 'I':
case 'i':
case 'O':
case 'o':
case 'U':
case 'u':
check =1;
cout<<endl;
if(check == 1)
{
cout<<"Vowel "<<stringObj[i]<<" found at index number "<<valueAt<<endl; //printing the index
of the vowels
count++; //counts the number of vowels in the string
}
check = 0;
}
valueAt++;
i++;
}
cout<<stringObj;
cout<<"\nTotal number of vowels ="<<count<<endl;
file.close();
return 0;
}
