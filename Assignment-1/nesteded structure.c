#include<stdio.h>  
struct address   // Define the structure
{  
    char city[20];  
    int pin;  
    char phone[14];  
};  

struct employee  
{  
    char name[20];  
    struct address add;      // Define the nested structure
};  
void main ()  
{  
    struct employee emp;   // define structure with emp 

    printf("Enter employee information?\n");  

    scanf("%s %s %d %s",emp.name,emp.add.city, &emp.add.pin, emp.add.phone);  

    printf("Printing the employee information....\n");  

    printf("name: %s",emp.name);  
    printf("\nCity: %s",emp.add.city);
    printf("\nPincode: %d",emp.add.pin);
    printf(" \nPhone: %s",emp.add.phone);  // nested loop calling with emp.add.(variabale name define in structure)
}