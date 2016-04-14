
/**
* Dynamic Class... Class.
* Amanda Steidl and Kyle Stanski
* 2016 04 14
* 
* Dynamic class for OOP Final Project.
* \description\
**/
#include <iostream>
#include <unordered_map>
#include <list>
#include <functional>

using namespace std;

#ifndef DYN_CLASS
#define DYN_CLASS

class Dyn_class
{
public:
	Dyn_class();
	void Dyn_class::operator()(void(*)());
	void Dyn_class::I_DID_IT_CAPTAIN();
	void Dyn_class::assign(void(*func)());

private:
	int feet;
	int inches;
	void(*funky)();
	//unordered_map<void(*)(), void(*)()> functions;
	
};

#endif
