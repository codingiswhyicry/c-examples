#include <iostream>
#include <string>
#include <sstream>
using namespace std; 

struct drinks {
    
    int drinkTemp; 
    string drinkName; 
    double drinkCost;    
    
}

int getTemp(void) {
    
    cout << "What's the temperater you want your drink?" << endl; 
    
    int temperature; 
    cin >> temperature; 
    return temperature;
    
}

string getName(void) {
    
    string name; 
    cout << "What's the name of your drink?" << endl; 
    cin << name; 
    return name;
}

double getCost(void) {
    
    
    
}

int main() {
    
    
    return 0;
}