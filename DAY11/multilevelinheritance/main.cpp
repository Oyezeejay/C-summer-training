#include <iostream>

using namespace std;
class firstname
{
public:
    string f_name;
    string l_name;

};
class lastname : public firstname
{
public:
    void input()
    {
        cout << "Enter First Name :" <<endl;
        cin >> f_name;
        cout << "Enter Last Name :" <<endl;
        cin >> l_name;

    }
};
class family : public lastname
{
public:
    void display()
    {
        cout << "\nFirst name is :" << f_name;
        cout << "\nLast name is :" << l_name;
    }
};
int main()
{
    family obj;
    obj.input();
    obj.display();
    return 0;
}
//Object is always created of the last class
