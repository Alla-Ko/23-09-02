#include <iostream>
using namespace std;
class Class {
public:
	static int Counter;
	Class() { ++Counter; };
	~Class() { 
		--Counter; 
		if(Counter == 0) cout << "Бувай!" << endl; 
	};
	void HowMany() { cout << Counter << " примірники" << endl; }
};
int Class::Counter = 0;
int main() {
  { cout << Class::Counter << " примірників поки що..." << endl;
	Class a;
  cout << Class::Counter << " примірник поки що..." << endl;  
	Class b;
  b.HowMany();
	cout << Class::Counter << " примірники поки що..." << endl;
	Class c;
	Class d;
	b.HowMany();}

	return 0;
	}