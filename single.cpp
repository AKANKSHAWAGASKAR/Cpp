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
 

int main()
{
Derived * ptr = NULL;

ptr = new Derived;

ptr->Fun();
ptr->Gun();



delete ptr;


return 0;
}