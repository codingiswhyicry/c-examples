#include <iostream>
using namespace std; 

//creates function readNumber()
int readNumber() {
    
    cout << "can I have an integer?" << endl; 
    
    int number; 
    cin >> number; 
    
    return number; 
}

//creates function writeNumber()
int writeNumber(int x, int y) {
    
    return x + y;
}

//main function of the program 
int main() {
    
    int firstNumber = readNumber(); 
    
    int secondNumber = readNumber(); 
    
    cout << "Your number is " << writeNumber(firstNumber, secondNumber) << endl;
    
    return 0;
}