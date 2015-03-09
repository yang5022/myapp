#include <iostream>
using namespace std;

//#include <string>
#include "salary.h"

int main(){
	Employee a(0.0,0.0,0.0,"Joe","111111");
	a.display();
	a.showone(0.1, 1000.0);
	
	Employee b(0.0,0.0,0.0,"Tom","222222");
	b.display();
	b.showtwo(0.2,1000.0);

	return 0;
}

