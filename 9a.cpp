#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
try{
try
{
throw " A Char Exception "; //Throws a String
}
catch(const char *a)
{
cout<<"Char type in inner block"<<endl;
cout<<"Rethrowing the exception "<<endl;
throw;
}
}
catch(const char *a)
{
cout<<"Char type in outer block"<<a<<endl;
}
catch(...)
{
cout<<"Unexpected exception in the outerblock"<<endl;
}
return 0;
}
