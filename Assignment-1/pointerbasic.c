// pointer is the varibale that can be store the address of another varabale 
//pointer should decalre with  data type *(pointer name )
//syntax :data_type  * pointer_varibale 

#include<stdio.h>
void main()
{
    int a =15;
    int *pointer;

    pointer=&a    ////stores the address of number variable    a 
    

    printf("address of a =%d",&a);    //a  contains the address of the number therefore printing a gives the address of number.     
    printf("value of a=%d",a);  //As  a * is used to dereference a pointer therefore if we print &pointer we get avalue of p 
    getch();

}
