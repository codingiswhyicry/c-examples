#include <iostream>
using namespace std; 

//talking about scopes!

int multiplyThese(int x, int y) {  //integers x and y created within local scope
    
    return x * y; //integers x and y are used
    
} //integers x and y are destroyed within the scope

int main() {
   
  cout << "input two integers!" << endl; 
  
  //creates integer a and b within the scope
  int a; 
  int b; 
  
  //asks for user input about integer a  
  cout << "input integer a!" << endl;
  cin >> a; 
  
  //asks for user input about integer b 
  cout << "input integer b!" << endl;
  cin >> b; 
   
  //takes the two and multiply them
  cout << "here are these two multiplied together!" << endl; 
  cout << multiplyThese(a, b) << endl; 
    
    return 0; 
}