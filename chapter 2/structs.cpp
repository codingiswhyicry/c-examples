#include <iostream>
#include <string>
using namespace std; 

struct drinks {
    
    int drinkTemp; 
    string drinkName; 
    float drinkCost;    
    
} yourDrink;

int getTemp() {
    
    cout << "What's the temperature you want your drink?" << endl; 
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
    
    float myCost = 4.75;
    
    return myCost;
}

void printDrinkOrder() {
    
   cout << "You ordered a " << yourDrink.drinkName << " at " << yourDrink.drinkTemp << " degrees" << endl << "and the total is: $" << yourDrink.drinkCost << endl;  
    
}
int main() {
    
    yourDrink.drinkTemp = getTemp(); 
    yourDrink.drinkName = getName();
    yourDrink.drinkCost = getCost(); 

    printDrinkOrder();
    
    return 0;
}