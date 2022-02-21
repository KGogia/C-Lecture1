#include <iostream>
#include <cmath>
#include "Header.h"
#include "Header1.h"

#define _MY_CONST_ 1 //doesn't cosume much memory

//#pragma : disable W34566 //disables warning


int main() {

	std::string name = "Ketevan";
	std::string surname = "Gogia";
	
	Test1(name);
	Test2(surname);

	return 0;
}
