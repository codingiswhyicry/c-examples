#include <iostream>
//this include function uses <> because it's in the STD namespace 
#include "addFunction.h"
//this include uses "" because it is not in a namespace, and is contained within the complier

using namespace std; 

//the function add is declared in the header file "addFunction.h", while the code is defined in the cpp file "addFunction.cpp"

int main() {
    
    cout << "give me two numbers to add!" << endl; 
    
    cout << "the first number is:" << endl; 
    
    int firstNumber; 
    cin >> firstNumber; 
    
    cout << "the second number is" << endl; 
    
    int secondNumber; 
    cin >> secondNumber; 
    
    cout << "these two added together are:" << add(firstNumber, secondNumber) << endl; 
    
    return 0; 
}