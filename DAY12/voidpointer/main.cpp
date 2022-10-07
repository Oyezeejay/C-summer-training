#include <iostream>

using namespace std;

int main()
{
    string x = "Zarak";
    int y = 10;

    void *ptr;
    ptr = &x;
    cout << "\nString value is : " << *((string*) ptr);

    ptr = &y;
    cout << "\nInteger value is : " << *((int*) ptr);

    return 0;
}
