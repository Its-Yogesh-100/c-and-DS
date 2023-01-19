#include <bits/stdc++.h>
using namespace std;

// class is nothing but a template that helps to create an
// instance of objects in a memeory

// objects are the real world entities

// ACCESS MODIFIERS

// BY DEFAULT PRIVATE ARE THERE

// GETTERS AND SETTERS USED TO ACCESS
// VARIABLE OUTHSIDE THE CLASS

// class Hero
// {

// private:
//   int health;

// public:
//   int level;

//   void print()
//   {
//     cout << "HELLO";
//   }

//   int gethealth()
//   {
//     return health;
//   }

//   void setHealth(int h)
//   {
    
//     health=h;
//   }
// };
// int main()
// {
//   Hero h1;

//   h1.setHealth(10);
  

//   Hero *h2=new Hero;

//   cout<<h2->gethealth()<<endl;

//   h2->setHealth(80);

//   cout<<h2->gethealth()<<endl;

//   cout<<sizeof(h1);
//   return 0;
// }


//  this is a pointer that is 
//  pointing to object
class Animal{

  public:
  string name;
  int legs;
  
  Animal()
  {
    cout<<"Animal constructor";
  }

  Animal(string type)
  {
    cout<<"this is name"<<endl;
      this->name=type;
  }
};

int main()
{
  Animal a("cat");

  cout<<a.name;


  return 0;
}


// why we use constructor in c++?   