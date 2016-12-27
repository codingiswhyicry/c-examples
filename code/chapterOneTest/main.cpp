#include <iostream>
using namespace std; 

int readNumber() {
    
    cout << "can I have an integer?" << endl; 
    
    int number; 
    cin >> number; 
    
    return number; 
}

int writeNumber(int x, int y) {
    
    return x + y;
}

int main() {
    
    int firstNumber = readNumber(); 
    
    int secondNumber = readNumber(); 
    
    cout << "Your number is " << writeNumber(firstNumber, secondNumber) << endl;
    
    return 0;
}