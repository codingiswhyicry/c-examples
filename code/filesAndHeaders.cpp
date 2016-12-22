#include <iostream>
using namespace std; 

//the function add is in a separate file, and is declared as a function prototype here

int add(int x, int y);

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