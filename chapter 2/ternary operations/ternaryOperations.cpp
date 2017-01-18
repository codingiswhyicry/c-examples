#include <iostream>
#include <string>
using namespace std;

    string eval_bool(string user_input){
    
        string return_val = ((user_input == "true") ? "You returned true" : "You returned false");
    
        return return_val;
    }

    int main() {
        
        string user_in;
        cin >> user_in;
        cout << eval_bool(user_in) << endl;
        
        return 0;
    }
