//Defining a struct to hold the function pointer, its name, and the argument to be passed.
//A function to register (store) these details in an array.
//Another function to execute each registered function with some delay between each call.



#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // for sleep function

// Define the maximum number of function pointers that can be registered
#define MAX_FUNCTIONS 10

// Define the structure to hold the function pointer, its name, and its argument
typedef struct {
    void (*func)(int); // Function pointer that takes an int as an argument
    char name[50];     // Name of the function
    int argument;      // Argument to be passed to the function
} FunctionEntry;

// Array to store registered function entries
FunctionEntry functionList[MAX_FUNCTIONS];
int functionCount = 0; // Number of registered functions

// Function to register a function pointer with its name and argument

void registerFunction(void (*func)(int), const char *name, int argument)
 {
    if (functionCount < MAX_FUNCTIONS)
     {
        functionList[functionCount].func = func;
        snprintf(functionList[functionCount].name, 50, "%s", name);
        functionList[functionCount].argument = argument;
        functionCount++;
    }
     else 
     {
        printf("Function list is full. Cannot register more functions.\n");
    }
}

// Function to execute each registered function with some delay

void executeRegisteredFunctions() 
{
    for (int i = 0; i < functionCount; i++) 
    {
        printf("Executing function: %s\n", functionList[i].name);
        functionList[i].func(functionList[i].argument);
        sleep(1); // Delay of 1 second between each function call
    }
}

// Sample functions to be registered and called

void sampleFunction1(int x)
 {
    printf("Sample Function 1 called with argument %d\n", x);
}

int main() {

    // Registering sample functions

    registerFunction(sampleFunction1, "Sample Function 1", 10);


    // Executing registered functions

    executeRegisteredFunctions();

    return 0;
}
