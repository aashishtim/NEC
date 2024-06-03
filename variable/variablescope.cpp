#include<iostream>  
using namespace std; 
   
//GLOBAL VARIABLE DECLARE WHICH CAN CALL ANY WHERE 
int x = 200;   
    
int main() 
{ 
     
  int x = 10;       //VAR DEFINE WITH IN FUNCTION 
  cout << "Value of global x is " << ::x; 
  cout<< "\nValue of local x is " << x;   
  return 0; 
}