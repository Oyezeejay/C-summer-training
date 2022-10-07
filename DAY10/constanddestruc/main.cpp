#include <iostream>

using namespace std;
class DestructorConstructor
{
public:
    DestructorConstructor()
    {
        cout<<"Zarak"<<endl;
    }
    ~DestructorConstructor()
    {
        cout<<"Jahan"<<endl;
    }
};


int main()
{
    DestructorConstructor obj;
    return 0;
}
