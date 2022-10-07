#include <iostream>

using namespace std;

class student{
    public:
        int age;
        int height;
        char name[20];
    }x1;

int main()
{
    x1.age = 22;
    x1.height = 186;
    cout<<"\n"<<x1.age;
    cout<<"\n"<<x1.height;
}
