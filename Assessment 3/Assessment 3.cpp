#include <iostream>
#include "A.h"

using namespace std;

int main() {
	A* a1 = new A("a"); //Creates new object a1 with name "a"
	a1->setName("IamA"); //Changes name of object a1 to "IamA"
	A a2 = *a1; //Creates new object a2 from pointer a1
	delete a1; //Deletes object a1
	a2.printName(); //Outputs name of object a2 to console
}

