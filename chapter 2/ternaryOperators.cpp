#include <iostream>
#include <string>
using namespace std;

    // this program will explore using ternary operators in place of common conditional statements

    string eval_bool(string user_input) {
        
        string return_val = ((user_input == "true") ? "You returned true" : "You returned false");
        
        return return_val;
    }

    int main() {
        
        string user_string;
        cin >> user_string;
        cout << eval_bool(user_string) << endl;
        
        return 0;
    }
