#include <bits/stdc++.h>
using namespace std;

// class is nothing but a template that helps to create an
// instance of objects in a memeory

// objects are the real world entities

// ACCESS MODIFIERS

// BY DEFAULT PRIVATE ARE THERE

// GETTERS AND SETTERS USED TO ACCESS
// VARIABLE OUTHSIDE THE CLASS

class Hero
{

private:
  int health;

public:
  int level;

  void print()
  {
    cout << "HELLO";
  }

  int gethealth()
  {
    return health;
  }

  void setHealth(int h)
  {
    health=h;
  }
};
int main()
{
  Hero h1;

  h1.setHealth(10);
  cout << h1.gethealth()<< endl;
  cout << h1.level << endl;
  return 0;
}
