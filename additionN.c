/*

  Steps to Develop the Application

  Step 1: Understand the problem statement
  Step 2: Write the Alorithm
  Step 3: Decide the programming language(C/C++/JAVA/Python/______)
  Step 4: Write the program
  Step 5: Test the program

 */


//Accept N number from user and perform the addition


//Input
//Value of N =5 
//Values : 10 20 30 40 50 

//Output 
// Addition is : 150


//Algorithm

/*
START
  Accept the Number of elements from user
  Allocate the mwmory to store that numbers
  Accept the numbers from user
  Perform adddition of all numbers
  Display the addition 
END
*/



#include<stdio.h>    //For printf scanf
#include<stdlib.h>   //For malloc and free

////////////////////////////////////////
//
// Application Name : Addition of N nmumbers
// Input : N numbers
// Output : Addition
// Author : Akanksha Gautam Wagasakr
// Date : 18 september 2022
//
////////////////////////////////////////

int main()
{

 int *Arr = NULL;  //Pointer to hold the address of array
 int iSize = 0;  // Variable to hold size of array
 register int i = 0;     // loop counter
 
int iSum =0;   //To hold the addition

printf("Please enter how many elements you want?\n");
scanf("%d",&iSize);

//Allocate the memory
Arr = (int *)malloc(iSize *sizeof(int));
printf("Memory Allocation is successful\n");

printf("Please enter the elements\n");
//1      //2      4
for(i=0; i<iSize; i++)
{
scanf("%d",&Arr[i]);  //4
}

//perform Addition
for (i = 0; i<iSize ;i++)
{
iSum = iSum + Arr[i];
}

printf("Addition is : %d\n",iSum);

free(Arr);

printf("Memory gets dealllocated\n");


return 0;
}

