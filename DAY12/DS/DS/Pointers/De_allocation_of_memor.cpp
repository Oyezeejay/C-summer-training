// Deallocating a memory pointed by ptr causes
// dangling pointer

#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int* ptr = (int *)malloc(sizeof(int));

	// After below free call, ptr becomes a
	// dangling pointer
	free(ptr);

	cout << ptr <<endl;

	// No more a dangling pointer
	ptr = NULL;

	cout << ptr << endl;
}



