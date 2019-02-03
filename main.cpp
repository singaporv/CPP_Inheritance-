#include <iostream>
#include "mother.h"
#include "daughter.h"

using namespace std;


// we will be inheritting all the stuff from mother and putting it in the daughter class

// mother - base class
// daughter -- derived class


// if we dont use this inheritance - we have to copy all the functions in daughter from mother


// Important --> inlude mother.h in daughter.h (where it is inherited)

int main(){
	mother mom;
	mom.sayName();

	daughter shiv; // now we want this daughter object to have same function as mom had
	shiv.sayName();


}