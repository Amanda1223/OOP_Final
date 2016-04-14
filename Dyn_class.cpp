
#include "Dyn_class.h"


Dyn_class::Dyn_class()
{
}

void Dyn_class::operator()(void(*func)())
{
	func();
}
void Dyn_class::assign(void(*func)())
{
	funky = func;
}
void Dyn_class::I_DID_IT_CAPTAIN()
{
	funky();
}
void functiony() {
	cout << "woohoo I succeeded\n";
}

int main(){
	//caller(functiony);
	//auto funcCall = [](void(*func)()){func(); };
	//funcCall(functiony);

	Dyn_class dyn = Dyn_class();
	
	dyn.assign(functiony);
	dyn.I_DID_IT_CAPTAIN();

	system("pause");
}
