#include <iostream>
using namespace std; 

/* the more memory a variable holds, the more information it can store.

    A general rule is that a variable with x amount of bytes can store 2^x of possible values
*/

int main() {
    
    // c++ provides an operator called sizeof that can give you the size of a variable in bytes
    
    cout << "The size of a boolean is:\t" << sizeof(bool) << endl; 
    cout << "The size of a char is:\t\t" << sizeof(char) << endl; 
    cout << "The size of a wchar_t is:\t" << sizeof(wchar_t) << endl; 
    cout << "The size of a char16_t is:\t" << sizeof(char16_t) << endl;
    cout << "The size of a char32_t is:\t"<< sizeof(char32_t) << endl; 
    cout << "The size of a short is:\t\t" << sizeof(short) << endl;
    cout << "The size of a int is:\t\t" << sizeof(int) << endl; 
    cout << "The size of a long is:\t\t" << sizeof(long) << endl; 
    cout << "The size of a long long is:\t" << sizeof(long long) << endl; 
    cout << "The size of a float is:\t\t" << sizeof(float) << endl; 
    cout << "The size of a double is:\t" << sizeof(double) << endl; 
    cout << "The size of a long double is:\t" << sizeof(long double) << endl; 
    
    return 0;
}

/*
    Variables and their sizes
    
    bool: 1 byte
    char: 1 byte (signed + unsigned)
    wchar_t: 1 byte 
    char16_t: 2 bytes
    char32_t: 4 bytes
    short: 2 bytes
    int: 2 bytes
    long: 4 bytes
    long long: 8 bytes
    float: 4 bytes
    double: 8 bytes
    long double: 8 bytes 
*/