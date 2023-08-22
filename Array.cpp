#include<iostream>
using namespace std;

class Array
{
public:

int iSize;
int *Arr;

Array(int iLength )
{
cout<<"Inside the constructor\n";

iSize = iLength;
Arr = new int[iSize];
}

~Array()
{
cout<<"Inside destructor\n";

delete []Arr;
}
void Accept()
{
cout<<"enter the value\n";
int i =0;

for (i =0;i<iSize; i++)
{
cin>>Arr[i];
}
}
void Display()
{

cout<<"element of array are\n";
int i = 0;
for(i = 0;i<iSize;i++)
{
//iSum = iSum + Arr[i];

//return iSum;
}
}
};

int main()
{
cout<<"Inside main\n";
//intb iRet = 0;

Array obj1(4);

obj1.Accept();
obj1.Display();

//iRet = obj1.Summetion();

//cout<<"Summetion of all elements :
return 0;
}
