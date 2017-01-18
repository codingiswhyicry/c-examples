#include <iostream>
using namespace std; 

//well today we're learning about parameters! how snazzy

void thisIsAFunction(){
    
    //this function takes no parameters, and it doesn't return anything.
    cout << "Hey I'm a function!" << endl;
}

int thisIsAlsoAFunction(int x) {
    //this function does take a parameter, which is integer x. it returns x plus its' self. 
    
    return x + x;
}

int add(int x, int y){
    
    return x + y;
}

int doubleFunction(int x){
    
    return x * 2;
}

//main takes no parameters
int main() {
    
    
    thisIsAlsoAFunction(12);
    
    /*12 is an argument. An argument is a value that the caller passes to the function for it to complete its' job.*/
    
    thisIsAFunction();
    
    
    //add is a function that takes two numbers from the caller and adds them. if you couldn't tell, you probably should go back and read a book on c++. good luck, though. 
    add(5,7);
    
    
    //if you wanna get super spooky, you can also pass a function as a parameter to another function. 
    
    cout << add(2, add(7, 7)) << endl; 
    
    cout << "that was spooky." << endl; 
    
    cout << "You wanna see something even spookier?" << endl << "I can take a number from you." << endl << "AND DOUBLE IT" << endl; 
    
    cout << "please give me a number:" << endl; 
    
    int userNumber; 
    
    cin >> userNumber; 
    
    cout << doubleFunction(userNumber) << endl; 
    
    
    return 0;
}