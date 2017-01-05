#include <iostream>
#include <string>
#include <sstream>
using namespace std; 


struct drinks {
    
    int drinkTemp; 
    string drinkName; 
    unsigned float drinkCost;    
    
} yourDrink;

int getTemp() {
    
    cout << "What's the temperater you want your drink?" << endl; 
    
    int temperature; 
    cin >> temperature; 
    return temperature;
    
}

string getName() {
    
    string name; 
    cout << "What's the name of your drink?" << endl; 
    cin << name; 
    return name;
}

unsigned float getCost() {
    
    cout << "You don't get to choose your drink cost. Just assume it's really expensive." << endl; 
    
    const unsigned float myCost = 4.75;
    
    return myCost;
}

int main() {
    
    yourDrink.drinkTemp = getTemp(); 
    yourDrink.drinkName = getName();
    yourDrink.drinkCost = getCost(); 
    
    
    return 0;
}