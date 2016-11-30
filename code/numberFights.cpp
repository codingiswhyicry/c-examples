#include <iostream>
using namespace std;

/*when you call a function int, it means you are returning an integer. this could also be ran as void, which means no value returned. */

int getUserInput() {
    
    int a; 
    cin >> a; 
    
    return a;
}

int main() {
    
    cout << "What's your favorite number?" << endl; 
    
    int favoriteNumber = getUserInput();
    
    cout << "Which number do you like the least?" << endl; 
    
    int leastFavoriteNumber = getUserInput();
    
    cout << "This is your favorite number divided by your least favorite. Numbers do fight to the death." << endl << favoriteNumber / leastFavoriteNumber << endl; 
    
    cout << "Oh no! The numbers came back to life! Here is your least favorite number divided by your favorite." << endl << leastFavoriteNumber / favoriteNumber << endl; 
    
    cout << "We need new numbers to fight each other. Give me two more." << endl; 
    
    cout << "The first one is" << endl; 
    
    int firstNumber = getUserInput();
    
    cout << "Okay, we got the first. Which number is next?" << endl; 
    
    int secondNumber = getUserInput();
    
    cout << "Here we go! Fight again!" << endl << firstNumber / secondNumber << endl; 
    
    cout << "Oh good god! There's more number fighting?" << endl << secondNumber / firstNumber << endl; 
    
    cout << "This cannot go on any longer! Somebody think of the children!" << endl; 
    
    return 0; 
}