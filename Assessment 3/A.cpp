#include "A.h"
#include <iostream>

using namespace std;

//default constructor
A::A(){
	name;
}

/// <summary>
/// overload constructor
/// </summary>
/// <param name="input"></param>
A::A(string input) {
	name = input;
}

/// <summary>
/// destructor
/// </summary>
A::~A() {}
//sets name of object using string parameter
void A::setName(string input) {
	name = input;
}

/// <summary>
/// outputs name of object to console
/// </summary>
void A::printName() {
	cout << name;
}
