#include <iostream>
#include <string>
using namespace std; 


struct drinks {
    
    int drinkTemp; 
    string drinkName; 
    float drinkCost;    
    
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
    cin >> name; 
    return name;
}

float getCost() {
    
    cout << "You don't get to choose your drink cost. Just assume it's really expensive." << endl; 
    
     float myCost = 4.75;
    
    return myCost;
}

int main() {
    
    yourDrink.drinkTemp = getTemp(); 
    yourDrink.drinkName = getName();
    yourDrink.drinkCost = getCost(); 
    
    cout << "You ordered a" << yourDrink.drinkName << "at" << yourDrink.drinkTemp << "and the total is" << yourDrink.drinkCost << endl; 
    
    return 0;
}