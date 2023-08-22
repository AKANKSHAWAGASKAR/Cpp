#include<iostream>
using namespace std;

class Base
{
public:   // Access Specifier    
int A,B;

void fun()   // Function Defination   //1000
{
cout<<"Base fun\n";
}

void gun(int i)    // Function Defination  //2000
{
cout<<"Base gun with one integer\n";
} 

void gun(int i, int j)    // Overloaded  Function Defination  //3000
{
cout<<"Base gun with 2 integers\n";
}

};

class Derived :public Base
{
public:
int X,Y;

void sun()    // Function Defination   //4000
{
cout<<"Derived sun\n";
}

void fun(int i)    // Function redefination   //5000
{
cout<<"Derived fun\n";
}

};

int main()
{
Derived dobj;
dobj.Base::fun();    //CALL
dobj.gun(11);  //CALL
dobj.gun(11,21);  //CALL
dobj.sun();  //CALL
  
//Base bobj;
//bobj.fun();

return 0;
}

 