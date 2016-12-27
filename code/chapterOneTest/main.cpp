#include <iostream>
using namespace std; 

int readNumber(); 

int writeNumber(int x, int y);
//main function of the program 
int main() {
    
    int firstNumber = readNumber(); 
    
    int secondNumber = readNumber(); 
    
    cout << "Your number is " << writeNumber(firstNumber, secondNumber) << endl;
    
    return 0;
}