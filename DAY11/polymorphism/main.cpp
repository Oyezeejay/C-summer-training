#include <iostream>

using namespace std;

class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

class Cow : public Animal {
  public:
    void animalSound() {
    cout << "The cow says: moo moo \n" ;
  }
};

class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};
int main()
{
    Animal obj;
    Cow obj1;
    Dog obj2;

    obj.animalSound();
    obj1.animalSound();
    obj2.animalSound();


    return 0;
}
