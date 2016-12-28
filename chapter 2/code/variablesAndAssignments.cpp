#include <iostream>
using namespace std; 

//this program is talking about variables and stuff like that 

int main() {
    
    /*
    
    variables are names for a piece of memory that is used to store information 
    
    memory is organized into addresses that allows us to find that memory at the location, like a street address.
    
    the smallest addressable unit of memory is called a byte, which is 8 bits. 
    
    due to the fact that all data is just bits, programmers use data types to tell the complier what to interpret that number as. 
    */
    
    bool booleanVar; 
    //data type of boolean, which means true or false 
    
    char charVar; 
    //data type of char, which means a single ASCII character
    
    int intVar; 
    //data type of int, which means a whole number (no decimals)
    
    float floatVar; 
    //data type of float, which means a number with decimals 
    
    double doubleVar; 
    // a loooong number (just trust me on this)
    
    //in c++, there are a couple of different ways to initialize a variable 
    
    int copy = 43; //this is copy initialization 
    
    int direct(134); //direct initialization is better than copy, especially when it comes to assignment 
    
    int uniform{1244}; //this is uniform initialization, which works with c++ 11 compilers
    
    int thisIsAVar; 
    thisIsAVar = 38; // this is an example of copy assignment, which means that a value is given a value after it is initialized
    
    int a, b; // you can also initialize more than 1 variable at a time
    //as a rule, you should generally not do this, because it's confusing and bad practice and your parents didn't pay for you to go to college and get a computer science degree so you could be lazy 
    
    
    return 0;
}