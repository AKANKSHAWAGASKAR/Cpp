#include<iostream>
using namespace std;

class Base
{
public:
int A,B;

Base()
{
cout<<"Inside base constructor\n";
}

~Base()
{
cout<<"Inside base destructor\n";
}

void Fun()
{
cout<<"Inside Base Fun\n";
}

};


class Derived : public Base
{
public:
int X,Y;

Derived()
{
cout<<"Inside derived constrctor\n";

}
~Derived()

{
cout<<"Inside derived destructor\n";

}

void Gun()
{
cout<<"Inside gun of Derived\n";
}
};
 
class DerivedX : public Derived
{
public:
int  i,j;
DerivedX()
{

cout<<"Inside DerivedX constructor\n";

}
~DerivedX()
{
cout<<"Inside DerivedX destrctor\n";
}

void sun()

{
cout<<"Inside DerivedX sun\n";
}

};

int main()
{


cout<<"Size of Base :"<<sizeof(Base)<<"\n";
cout<<"Size of Derived :"<<sizeof(Derived)<<"\n";
cout<<"Size of DerivedX :"<<sizeof(DerivedX)<<"\n";

dobj.fun();
dobj.gun();
dobj.sun();
DerivedX dobj;



//delete ptr;


return 0;
}