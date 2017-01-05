#include <iostream>
using namespace std; 

//this program will explore forward declarations and function prototypes 

/* this function is defined before the main function, and won't cause any problems with the complier */

//defines the function multiplyTwoNumbers
int multiplyTwoNumbers(int x, int y) {
    
    return x * y;
}

/* this is a forward declaration of the function addTwoNumbers as a function prototype. it won't cause problems with the complier, as the declaration is added later. */

int addTwoNumbers(int x, int y);

int main() {
    
    //declares the integer 7, but does not define it. 
    int x; 
    
    x = 7; 
    multiplyTwoNumbers(5, 6);
    
    addTwoNumbers(7, 8);
    
    
    return 0; 
}

//the function is declared here, below main. 
int addTwoNumbers(int x, int y) {
    
    return x + y;
}

/*

To declare something is to create a memory allocation for it, and to let the compiler / program know that it's a thing.
Think of it as seeing a new word in the dictionary. 

To define something is to give it a value, or set of instructions. 
Think of it as seeing the definition for the declared word. 

 Imagine meeting a guy named Harry.
 
 Harry says he has a job, or he "declares" he has a job. Now you know he has a job. Wow, nice job Harry.
 
 Then Harry says he is a graphic designer. He then "defined" his job, and gave it a value.
 
 Everyone is laughing at Harry because he uses Microsoft Paint as his main design tool. 
 
 They laugh rightfully so. 


*/