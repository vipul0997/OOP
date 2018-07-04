#include<iostream>
using namespace std;
class class1 //create class called class1
{
public:class1() // call constructor of that class
{
cout<<"constuctor1"<<endl;
}
~class1() // call destuctor
{
cout<<"destuctor1"<<endl;
}
};
class class2:public class1 // inherit from class1
{
public:class2() // constructor of class2
{
cout<<"constuctor2"<<endl;
}
~class2() // destructor of class2
{
cout<<"destuctor2"<<endl;
}
};
int main()
{
class2 c1; // create object of derived class
return 0;
}
