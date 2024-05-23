// find the maximum number using the function with no argument 

#include<stdio.h>
#include<conio.h>   // line 3&4 are the header file in progamm
int maximum (int a, int b);  //define the function with function name "maximum "
void main()
{
    int x,y,z;                   // int type varibale define 
    printf("entre the two number"); 
    scanf("%d%d",&x,&y);        

    z=maximum(x,y);        // calling the function define as name of "maximum"
    printf("maximun number is %d",z); //output result
    getch();

}

int maximum (int a, int b)  //define the block of function with spefic code 
{
 if (a>b)
return (a);     //if a will greater then it will be return the a >b= return "a" else return "b"
else
reten (b);
}
