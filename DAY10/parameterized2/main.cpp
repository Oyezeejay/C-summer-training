#include <iostream>

using namespace std;

class parameterized {
public:
    string name;
    int sysid;

    parameterized(int s, string n){

    name = n;
    sysid = s;
    }

    void display()
    {
        cout<<sysid<<" "<<name<<endl;
    }
};

int main()
{
    parameterized obj = parameterized(2019004410, "Zarak Jahan");
    obj.display();
    return 0;
}
