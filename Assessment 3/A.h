#pragma once
#include <iostream>

using namespace std;

class A
{
public:
	A(); //default constructor
	A(string input); //overload constructor
	~A(); //destructor
	void setName(string input); //sets name of object using string parameter
	void printName(); //outputs name of object to console
private:
	string name; //name of object
};

