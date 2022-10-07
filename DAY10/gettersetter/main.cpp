#include <iostream>

using namespace std;

class age
{
private:
    int age;

public:
    void setage(int a)
    {
        age = a;
    }
    int getage()
    {
     return age;
    }
}obj;
int main()
{
    obj.setage(22);
    cout<<obj.getage();
    return 0;
}
