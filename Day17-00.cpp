#include <iostream>  
using namespace std; 

int main() {
    int a = 10; 

    // Declare a pointer 'ptr' of type int*, which will store the address of an integer variable
    int* ptr = &a;  // The address-of operator (&) is used to get the memory address of variable 'a' and store it in 'ptr'

    // Output the value of 'a' using the variable directly
    cout << "Value of a: " << a << endl;  // 'a' holds the value 10, so this will print "Value of a: 10"

    // Output the address of 'a' using the pointer 'ptr'
    cout << "Address of a: " << ptr << endl;  // 'ptr' holds the address of 'a', so this will print the memory address where 'a' is stored

    // Dereference the pointer 'ptr' to get the value stored at the memory address it points to
    cout << "Value via pointer: " << *ptr << endl;  // '*ptr' dereferences the pointer, which means it accesses the value stored at 'ptr' (which is 10)
    
    return 0; 
}
