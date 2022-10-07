#include <iostream>

using namespace std;

class parameterised{
public:
    int func(int marks);

}obj;
int parameterised :: func(int marks){


    return marks;
}


int main()
{
    cout<<obj.func(35);
    return 0;
}
