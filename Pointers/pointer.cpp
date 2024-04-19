#include <iostream>

int main()
{
    int number = 42;    // Declare an integer variable
    int *ptr = &number; // Declare a pointer and initialize it with the address of 'number'

    // Accessing the value using the pointer
    std::cout << "Value of number: " << *ptr << std::endl;

    // Modifying the value using the pointer
    *ptr = 100;
    std::cout << "New value of number: " << number << std::endl;

    return 0;
}
