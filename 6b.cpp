#include<iostream>
using namespace std;
class Student
{
public:
virtual void f()=0;//creating a pure virtual function
virtual void g()=0;//creating a pure virtual function
};
class Engineering:public Student
{
public:
void f(){}
void g()
{
cout<<"Welcome to engineering"<<endl;
}
};
class Medical:public Student
{
public:
void g(){}
void f()
{
cout<<"Welcome to medical science"<<endl;
}
};
int main()
{
Student *s1,*s2;//creating pointers of type Student(class)
Engineering e;//object of class Engineering
Medical m;//object of class Medical
s1=&e;
s2=&m;
s1->g();
s2->f();
return 0;
}
