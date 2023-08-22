#include<stdio.h>
#include<stdlib.h>

int main()

{
  int Arr[5];   //Static Memory Allocation
  
  int *p = NULL;
  
  p = (int *)malloc(sizeof (int)*5);

  //use the memory

  free (p);

  //code


  




return 0;  // Memory of Arr gets deallocated at this point


}