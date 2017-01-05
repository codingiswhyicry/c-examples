#include <iostream>
#include "io.h"
using namespace std; 

//main function of the program 
int main() {
    
    int firstNumber = readNumber(); 
    
    int secondNumber = readNumber(); 
    
    cout << "Your number is " << writeNumber(firstNumber, secondNumber) << endl;
    
    return 0;
}