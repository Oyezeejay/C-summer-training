#include <iostream>

using namespace std;
class outside{
public:
    void func();
}obj;
void outside::func(){
    cout<<"Zarak Jahan" <<endl;
};


int main()
{
    obj.func();
    return 0;
}
