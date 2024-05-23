//function is block of code or ststment to perfom a particular task 


//function with argument with return type 

#include<stdio.h>              
#include<conio.h>   //these line 6,7,8 are the header file of progamm
           
int addition(inta, intb); //here we should the define the function name as addition  with 2 return argument 

void main ()
{
    int a,b,c;     //  int type varibale define 
    printf("enter the  value of x &y ");
    scanf("%d%d",&a,&b);

    c=addition(a,b);            //function called with function name "addition" with argument "a &b "
    printf("sum=%d",c);

    getch();                       
}
int addtion(inta,intb)     //function define here with a & b argument
{
    int sum;
    int a,b;
    sum=a+b;
    return(sum);    //function return the value as sum in above line 17 funcation call at run time        
}