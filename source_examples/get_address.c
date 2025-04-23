#include <stdio.h>

int main(){
    int number = 10; // Declare an integer variable
    int *ptr; // Declare a pointer variable
    // Assign the address of number to ptr
    ptr = &number; // use the operator & to get the address of number
    // Print the address of number using the pointer
    printf("Address of number: %p\n", (void*)ptr); // %p is used to print pointer addresses
    // Print the value of number using the pointer
    printf("Value of number: %d\n", *ptr); // use the operator * to dereference the pointer and get the value
}