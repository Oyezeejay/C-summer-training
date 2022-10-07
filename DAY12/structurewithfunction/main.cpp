#include <iostream>
#include <cstring>

using namespace std;
void display (struct ZarakJahan zj);

struct ZarakJahan
{
    char address [200];
    char experties [100];
    int age;
};

int main()
{
    struct ZarakJahan zj;

    strcpy(zj.address, "Greater Noida");
    strcpy(zj.experties, "NONE, NADA, NIL, N/A");
    zj.age = 22;

    display(zj);

    return 0;
}

void display( struct ZarakJahan zj)
{


    cout << "Address : " << zj.address <<endl;
    cout << "\n";
    cout << "Expertise : " << zj.experties <<endl;
    cout << "\n";
    cout << "Age : " << zj.age <<endl;
    cout << "\n";
}
