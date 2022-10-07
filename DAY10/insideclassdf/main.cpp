#include <iostream>

using namespace std;

class inside{
    public:
    void func(){
        cout<<"Hello world"<<endl;
    }
}obj;
int main()
{

    obj.func();
    return 0;
}
