#include<iostream>
using namespace std;

class Base 
{
public: 
int A,B;


};

class Derived : public Base
{

public:
int X,Y;

};

int main()
{  
Base *bp = NULL; 
Derived *dp = NULL;

Base bobj;
Derived dobj;

bp = &bobj;  //A  
dp = &dobj;  //A 
bp = &dobj;  //A
//dp = &bobj; // NA


return 0;
}