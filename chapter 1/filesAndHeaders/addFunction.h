/*
    These header guards tell the preprocesser with the ifndef and the define macros
*/

#ifndef ADDFUNCTION_H 
//if ADDFUNCTION_H is not defined, then define it 
#define ADDFUNCTION_H

//#ifndef and #define are both header guards 

int add(int x, int y);
//the function add is declared here, but not defined. 

//end the if 
#endif