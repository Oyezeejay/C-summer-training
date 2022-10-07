// The pointer pointing to local variable doesn't
// become dangling when local variable is static.

#include <iostream>
using namespace std;

int *fun()
{
	// x now has scope throughout the program
	static int x = 5;

	return &x;
}

int main()
{
	int *p = fun();
	fflush(stdin);
	
	// Not a dangling pointer as it points
	// to static variable.
	cout << *p;
	
	return 0;
}


