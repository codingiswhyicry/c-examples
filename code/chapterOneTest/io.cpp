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
