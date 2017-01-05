#include <iostream>
using namespace std; 

/* the purpose of this program is to experiment with inputs and outputs used in the iostream library that C++ uses */

int main () {
    
    float x = 3.1384; 
    //initializes float x with a value of 3.1284
    
    cout << x << endl; 
    
    int y = 5; 
    y = y - 2;
    
    cout << "The value of Y is" << endl << y << endl; 
    
    cout << "give me a random number!" << endl; 
    
    int randomNumber; 
    
    cin >> randomNumber;
    
    cout << "you entered" << endl << randomNumber << endl;
    
    
    return 0;
}