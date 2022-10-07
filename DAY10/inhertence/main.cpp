#include <iostream>

using namespace std;
class Parent
{
public:
    int money = 10000000;
};
class child : public Parent
{
public:
    int number = 10;
}obj;

int main()
{
    cout<<"Money :"<<obj.money<<endl;
    cout<<"Number of Children :"<<obj.number<<endl;
    return 0;
}
