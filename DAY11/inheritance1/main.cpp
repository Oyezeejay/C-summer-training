#include <iostream>

using namespace std;

class Parent
{
public:
    int height;
    int age;
    void input()
    {
        cout << "Enter Height : " <<endl;
        cin >> height;

        cout << "Enter Age : " <<endl;
        cin >> age;
    }
};
class child : public Parent
{
public:
    void display()
    {
        cout<<"\nHeight is :"<<height;
        cout<<"\nAge is : "<<age;
    }
}obj;
int main()
{
    obj.input();
    obj.display();
    return 0;
}
