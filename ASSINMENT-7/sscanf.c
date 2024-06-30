// C program to Read Data Using sscanf()

#include <stdio.h>
#include <string.h>

int main()
{
    // Define a string containing the data to be parsed.
    char* str = "Ram Manager 30";

    // Define variables to hold the parsed data.
    char name[10], designation[10];
    int age, ret;

    // Use sscanf to parse the string into the variables.
    ret = sscanf(str, "%s %s %d", name, designation, &age);

    // Print the parsed data.
    printf("Name: %s\n", name);
    printf("Designation: %s\n", designation);
    printf("Age: %d\n", age);

    return 0;
}
