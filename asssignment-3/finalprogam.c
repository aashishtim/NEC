// Create a program in c that has a function that registers a function pointer, 
// its names and argument that has to be passed to the function pointer in an array using a struct. 
// Then another function should take the registered function pointer details,
//  the function should call each registered function pointers after some delay.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>  // For sleep()

// Union to hold different types of arguments
typedef union {
    int i;
    float f;
    char c;
    char *s;
} Argument;

typedef void (*FunctionPointer)(Argument);

// Struct to hold the function pointer and its details
typedef struct {
    char *name;
    FunctionPointer func;
    Argument arg;
} FunctionDetail;

#define MAX_FUNCTIONS 10

FunctionDetail functionArray[MAX_FUNCTIONS];
int functionCount = 0;

// Function to Register the Function Pointer

void registerFunction(char *name, FunctionPointer func, Argument arg) {
    if (functionCount < MAX_FUNCTIONS) {
        functionArray[functionCount].name = strdup(name);
        functionArray[functionCount].func = func;
        functionArray[functionCount].arg = arg;
        functionCount++;
    } else {
        printf("Function array is full!\n");
    }
}

//Function to Call the Registered Functions with a Delay

void callRegisteredFunctions(int delay) {
    for (int i = 0; i < functionCount; i++) {
        printf("Calling function: %s\n", functionArray[i].name);
        functionArray[i].func(functionArray[i].arg);
        sleep(delay);
    }
}

// Functions to Register

void printInt(Argument arg) {
    printf("Integer: %d\n", arg.i);
}

void printFloat(Argument arg) {
    printf("Float: %.2f\n", arg.f);
}

void printChar(Argument arg) {
    printf("Char: %c\n", arg.c);
}

void printString(Argument arg) {
    printf("String: %s\n", arg.s);
}


//Main Function to Usage

int main() {
    Argument arg;

    // Register integer function
    arg.i = 42;
    registerFunction("printInt", printInt, arg);

    // Register float function
    arg.f = 3.14f;
    registerFunction("printFloat", printFloat, arg);

    // Register char function
    arg.c = 'A';
    registerFunction("printChar", printChar, arg);

    // Register string function
    arg.s = "Hello, World!";
    registerFunction("printString", printString, arg);

    // Call the registered functions with a delay of 1 second
    callRegisteredFunctions(1);

    // Free allocated memory
    for (int i = 0; i < functionCount; i++) {
        free(functionArray[i].name);
    }

    return 0;
}
