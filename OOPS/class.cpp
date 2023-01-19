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


// copy constructor


// This operator when objet dynamically allocated
// Dot operator when object of class is statically allocated

class Animal{

  public:
  string name;
  int legs;


 // copy constructor
  Animal(Animal& obj)
  {
    cout<<"copy constructor called "<<endl;
    this->legs=obj.legs;
    this->name=obj.name;
  }
  
  // parametric constructor
  Animal(int legs,string name)
  {
    this->legs=legs;
    this->name=name;

    cout<<this->name<<endl;
    cout<<this->legs<<endl;
  }

  // deconstructor

   ~Animal()
   {
    cout<<"deconstrucotr called"<<endl;
   }
 

};

int main()
{
  // Statically allocated objects 
  // deconstructor automatically called
  Animal a(4,"cow");

  Animal b(a);

  // dynamically allcoated objects 
  // deconstructor manually callled

  Animal *c=new Animal(4,"lion");

  delete c;
 


  cout<<b.legs<<endl;
  cout<<b.name<<endl;

  



  return 0;
}


// tilt sign in c++?    